#include <stdio.h>
#include "student.h"
#include "sub.h"
#include "pro.h"
#define sub_ID 0
#define st_ID 2000
#define START_ID 1000//관리번호 1000부터 시작 교 수 
struct student st;
struct pro p;
struct sub su;

void stupdate(FILE *fp);
void menu();
void sub_f(FILE *fp);//교직원 
void sub_p(FILE *fp);//교수 
void sub_s(FILE *fp);//학생 
void print(FILE *fp);

int main()
{
	//struct student record;
	FILE *fp;
	int a;
	int id;
	char c;
	
	
	while(1) {
		
		menu();
		
		scanf("%d",&a);
		
		switch(a){

    	case 1:
    	sub_f(fp);
    		
    	break;
    	
		case 2:
		sub_p(fp);
		 
    	break;
    	
    	case 3:	
    	
    	sub_s(fp);
    	break;
		
		case 4:
		
		print(fp);
		break;	
			
		case 5:
		return 0;	
			
		}
		
		
		
		
	}
	
}
	void menu(){
	printf("    .1 Faculty \n");
	printf("    .2 propessor\n");
	printf("    .3 student\n");
	printf("    .4 정보\n");
	printf("    .5 종  료 \n");	
	}
	
	void sub_f( FILE *fp){
		int a,b;
		FILE *f;
		printf("교직원 비밀번호를 입력하시오!\n");
		scanf("%d",&b);
		 
		 if(b!=0000){
		 	printf("틀렸습니다.\n");
		 return;
		 }
		while(1){
		
		printf("1.과목 생성\n");
		printf("2.학생정보 생성\n");
		printf("3.교수정보생성\n");
		printf("4.과목 정보 보기\n");
		printf("5.학생 정보 보기\n");
		printf("6.교수 정보 보기\n");
		printf("7.뒤로가기\n");
		scanf("%d",&a);
	
		switch(a){

    	case 1:
    		
    	fp = fopen("subject.txt","ab+");
		printf("%s, %s, %s, %s\n", "과목번호","과목명","담당교수번호","강의실");
	while(	scanf("%d %s %d %s",&su.id,su.name,&su.pid,su.room)==4){
	
			fseek(fp,(su.id-START_ID)*sizeof(su),SEEK_SET);
		fwrite(&su,sizeof(su),1,fp);
	}	fclose(fp);
    	
    		
    	continue;
    	
		case 2: 
		fp = fopen("student.txt","ab+");
		printf("%s, %s\n", "학 번","이 름");
	
	while(	scanf("%d %s ",&st.id,st.name)==2){
	
		fseek(fp,(st.id-START_ID)*sizeof(st),SEEK_SET);
		fwrite(&st,sizeof(st),1,fp);
}	
		fclose(fp);

    		continue;
    	
    	case 3:	
    	
    	fp = fopen("pro.txt","ab+");
		printf("%s, %s\n", "교수ID","교수 이름");
	while(	scanf("%d %s",&p.id,p.name)==2){
	
		fseek(fp,(p.id-START_ID)*sizeof(p),SEEK_SET);
		fwrite(&p,sizeof(p),1,fp);
		fclose(fp);
    }		continue;
		
		case 4:
			
			fp = fopen("subject.txt", "rb");
		while(fread(&su, sizeof(su), 1,fp)>0)
		{	
			if(su.id != 0)
			{
				printf("==============================\n");
				printf("  과목 번호 : %d\n", su.id);
				printf("  과목 이름: %s\n", su.name);
					f = fopen("pro.txt", "rb");
   
            fseek(f, (su.pid - START_ID) * sizeof(p), SEEK_SET);
            if ((fread(&p, sizeof(p), 1, f) > 0) && (p.id != 0))
                printf("  교수 이름: %s\n" , p.name);
            else printf("레코드 %d 없음\n", su.pid);

    fclose(f);
				
				
				printf("  강의실: %s\n", su.room);
				
				printf("==============================\n");
			}
		}
		fclose(fp);
			
			
				
			
			
			
			continue;	
		case 5:
		fp = fopen("student.txt", "rb");
		while(fread(&st, sizeof(st), 1,fp)>0)
		{	
			if(st.id != 0)
			{
				printf("==============================\n");
				printf("  학생 번호 : %d\n", st.id);
				printf("  학생 이름: %s\n", st.name);
				
				 //sub 검색해서 sub.id 와 st.csub[i]랑 비교 한후에 sub  
			
				
				printf("==============================\n");
			}
		}
		fclose(fp);
		continue;	
	
	case 6:
		fp = fopen("pro.txt", "rb");
		while(fread(&p, sizeof(p), 1,fp)>0)
		{	
			if(p.id != 0)
			{
				printf("==============================\n");
				printf("  교수 번호 : %d\n", p.id);
				printf("  교수 이름: %s\n", p.name);
			
				
				printf("==============================\n");
			}
		}
		fclose(fp);
		
		continue;
		
	case 7:
	break;
		
		}
		break;


		}	
		
		
	}
	
		void sub_p( FILE *fp){
		int a;
		int id;
		int ai[10];
		FILE *f;
		printf("교수 id: ");
		
		scanf("%d",&id);
		fp = fopen("pro.txt", "rb");
   
            fseek(fp, (id - START_ID) * sizeof(p), SEEK_SET);
            if ((fread(&p, sizeof(p), 1, fp) > 0) && (p.id != 0))
                printf("----------------------\n");
				printf("  교수 이름: %s\n" , p.name);
            

    fclose(fp);
		
		while(1){
		
		printf("1.교과목 확인\n");
		printf("2.과거 강의 과목\n");
		printf("3.학생 성적 입력\n");
		printf("4.학생 성적 확인\n");
		printf("5.뒤로가기\n");
		scanf("%d",&a);
	
		switch(a){

    	case 1:
    		
    		f = fopen("subject.txt", "rb");
  	
	  
			
		 fseek(f, (1) * sizeof(su), SEEK_SET);
           while(fread(&su, sizeof(su), 1,f)>0){
		    if (su.id != 0)
			if(su.pid == id)
			{
				printf("==============================\n");
				printf("  과목 번호 : %d\n", su.id);
				printf("  과목 이름: %s\n", su.name);
				printf("  강의실: %s\n", su.room);
				printf("==============================\n");
			}
	}
		fclose(f);
			
    		
    	continue;
    	
		case 2: 
    		continue;
    	
    	case 3:	
    	
/*fp = fopen("test.txt","rb+");
    do {
        printf("수정할 학생의 학번 입력: ");
        if (scanf("%d", &id) == 1) {
            fseek(fp, (id - START_ID) * sizeof(record), SEEK_SET);
            if ((fread(&record, sizeof(record), 1, fp) > 0) && (record.id != 0))
            {
                printf("학번: %8d 이름: %4s 점수: %4d\n", 
                       record.id, record.name, record.score);
                printf("새로운 점수 입력: ");
                scanf("%d", &record.score);
                fseek(fp, -sizeof(record), SEEK_CUR);
                fwrite(&record, sizeof(record), 1, fp);
           }
           else printf("레코드 %d 없음\n", id);
        }  
        else printf("입력오류\n");

        printf("계속하겠습니까?(Y/N)");
        scanf(" %c",&c);
    } while (c == 'Y');
    fclose(fp);
    	
    	*/
    		continue;
		
		case 4:
			
			continue;
		case 5:
		break;	
			
	
		}
		break;


		}	
		
		
	}
	
		void sub_s( FILE *fp){
		int a;
		int id ;
		printf("학번 입력\n"); 
		scanf("%d",&id);
		fp = fopen("student.txt", "rb");
   
            fseek(fp, (id - st_ID) * sizeof(st), SEEK_SET);
            if ((fread(&st, sizeof(st), 1, fp) > 0) && (st.id != 0))
                printf("----------------------\n");
				printf("  학생  이름: %s\n" , st.name);
					printf("  학생  학번: %d\n" , st.id);
					
		while(1){
		
		printf("1.현재 수강 내역\n");
		printf("2.과거 수강 내역\n");
		printf("3.수강 신청\n");
		
		printf("4.뒤로가기\n");
		scanf("%d",&a);
	
		switch(a){

    	#include <stdio.h>
#include "student.h"
#include "sub.h"
#include "pro.h"
#define sub_ID 0
#define st_ID 2000
#define START_ID 1000//관리번호 1000부터 시작 교 수 
struct student st;
struct pro p;
struct sub su;

void stupdate(FILE *fp);
void menu();
void sub_f(FILE *fp);//교직원 
void sub_p(FILE *fp);//교수 
void sub_s(FILE *fp);//학생 
void print(FILE *fp);

int main()
{
	//struct student record;
	FILE *fp;
	int a;
	int id;
	char c;
	
	
	while(1) {
		
		menu();
		
		scanf("%d",&a);
		
		switch(a){

    	case 1:
    	sub_f(fp);
    		
    	break;
    	
		case 2:
		sub_p(fp);
		 
    	break;
    	
    	case 3:	
    	
    	sub_s(fp);
    	break;
		
		case 4:
		
		print(fp);
		break;	
			
		case 5:
		return 0;	
			
		}
		
		
		
		
	}
	
}
	void menu(){
	printf("    .1 Faculty \n");
	printf("    .2 propessor\n");
	printf("    .3 student\n");
	printf("    .4 정보\n");
	printf("    .5 종  료 \n");	
	}
	
	void sub_f( FILE *fp){
		int a,b;
		FILE *f;
		printf("교직원 비밀번호를 입력하시오!\n");
		scanf("%d",&b);
		 
		 if(b!=0000){
		 	printf("틀렸습니다.\n");
		 return;
		 }
		while(1){
		
		printf("1.과목 생성\n");
		printf("2.학생정보 생성\n");
		printf("3.교수정보생성\n");
		printf("4.과목 정보 보기\n");
		printf("5.학생 정보 보기\n");
		printf("6.교수 정보 보기\n");
		printf("7.뒤로가기\n");
		scanf("%d",&a);
	
		switch(a){

    	case 1:
    		
    	fp = fopen("subject.txt","ab+");
		printf("%s, %s, %s, %s\n", "과목번호","과목명","담당교수번호","강의실");
	while(	scanf("%d %s %d %s",&su.id,su.name,&su.pid,su.room)==4){
	
			fseek(fp,(su.id-START_ID)*sizeof(su),SEEK_SET);
		fwrite(&su,sizeof(su),1,fp);
	}	fclose(fp);
    	
    		
    	continue;
    	
		case 2: 
		fp = fopen("student.txt","ab+");
		printf("%s, %s\n", "학 번","이 름");
	
	while(	scanf("%d %s ",&st.id,st.name)==2){
	
		fseek(fp,(st.id-START_ID)*sizeof(st),SEEK_SET);
		fwrite(&st,sizeof(st),1,fp);
}	
		fclose(fp);

    		continue;
    	
    	case 3:	
    	
    	fp = fopen("pro.txt","ab+");
		printf("%s, %s\n", "교수ID","교수 이름");
	while(	scanf("%d %s",&p.id,p.name)==2){
	
		fseek(fp,(p.id-START_ID)*sizeof(p),SEEK_SET);
		fwrite(&p,sizeof(p),1,fp);
		fclose(fp);
    }		continue;
		
		case 4:
			
			fp = fopen("subject.txt", "rb");
		while(fread(&su, sizeof(su), 1,fp)>0)
		{	
			if(su.id != 0)
			{
				printf("==============================\n");
				printf("  과목 번호 : %d\n", su.id);
				printf("  과목 이름: %s\n", su.name);
					f = fopen("pro.txt", "rb");
   
            fseek(f, (su.pid - START_ID) * sizeof(p), SEEK_SET);
            if ((fread(&p, sizeof(p), 1, f) > 0) && (p.id != 0))
                printf("  교수 이름: %s\n" , p.name);
            else printf("레코드 %d 없음\n", su.pid);

    fclose(f);
				
				
				printf("  강의실: %s\n", su.room);
				
				printf("==============================\n");
			}
		}
		fclose(fp);
			
			
				
			
			
			
			continue;	
		case 5:
		fp = fopen("student.txt", "rb");
		while(fread(&st, sizeof(st), 1,fp)>0)
		{	
			if(st.id != 0)
			{
				printf("==============================\n");
				printf("  학생 번호 : %d\n", st.id);
				printf("  학생 이름: %s\n", st.name);
				
				 //sub 검색해서 sub.id 와 st.csub[i]랑 비교 한후에 sub  
			
				
				printf("==============================\n");
			}
		}
		fclose(fp);
		continue;	
	
	case 6:
		fp = fopen("pro.txt", "rb");
		while(fread(&p, sizeof(p), 1,fp)>0)
		{	
			if(p.id != 0)
			{
				printf("==============================\n");
				printf("  교수 번호 : %d\n", p.id);
				printf("  교수 이름: %s\n", p.name);
			
				
				printf("==============================\n");
			}
		}
		fclose(fp);
		
		continue;
		
	case 7:
	break;
		
		}
		break;


		}	
		
		
	}
	
		void sub_p( FILE *fp){
		int a;
		int id;
		int ai[10];
		FILE *f;
		printf("교수 id: ");
		
		scanf("%d",&id);
		fp = fopen("pro.txt", "rb");
   
            fseek(fp, (id - START_ID) * sizeof(p), SEEK_SET);
            if ((fread(&p, sizeof(p), 1, fp) > 0) && (p.id != 0))
                printf("----------------------\n");
				printf("  교수 이름: %s\n" , p.name);
            

    fclose(fp);
		
		while(1){
		
		printf("1.교과목 확인\n");
		printf("2.과거 강의 과목\n");
		printf("3.학생 성적 입력\n");
		printf("4.학생 성적 확인\n");
		printf("5.뒤로가기\n");
		scanf("%d",&a);
	
		switch(a){

    	case 1:
    		
    		f = fopen("subject.txt", "rb");
  	
	  
			
		 fseek(f, (1) * sizeof(su), SEEK_SET);
           while(fread(&su, sizeof(su), 1,f)>0){
		    if (su.id != 0)
			if(su.pid == id)
			{
				printf("==============================\n");
				printf("  과목 번호 : %d\n", su.id);
				printf("  과목 이름: %s\n", su.name);
				printf("  강의실: %s\n", su.room);
				printf("==============================\n");
			}
	}
		fclose(f);
			
    		
    	continue;
    	
		case 2: 
    		continue;
    	
    	case 3:	
    	
/*fp = fopen("test.txt","rb+");
    do {
        printf("수정할 학생의 학번 입력: ");
        if (scanf("%d", &id) == 1) {
            fseek(fp, (id - START_ID) * sizeof(record), SEEK_SET);
            if ((fread(&record, sizeof(record), 1, fp) > 0) && (record.id != 0))
            {
                printf("학번: %8d 이름: %4s 점수: %4d\n", 
                       record.id, record.name, record.score);
                printf("새로운 점수 입력: ");
                scanf("%d", &record.score);
                fseek(fp, -sizeof(record), SEEK_CUR);
                fwrite(&record, sizeof(record), 1, fp);
           }
           else printf("레코드 %d 없음\n", id);
        }  
        else printf("입력오류\n");

        printf("계속하겠습니까?(Y/N)");
        scanf(" %c",&c);
    } while (c == 'Y');
    fclose(fp);
    	
    	*/
    		continue;
		
		case 4:
			
			continue;
		case 5:
		break;	
			
	
		}
		break;


		}	
		
		
	}
	
		void sub_s( FILE *fp){
		int a;
		int id ;
		printf("학번 입력\n"); 
		scanf("%d",&id);
		fp = fopen("student.txt", "rb");
   
            fseek(fp, (id - st_ID) * sizeof(st), SEEK_SET);
            if ((fread(&st, sizeof(st), 1, fp) > 0) && (st.id != 0))
                printf("----------------------\n");
				printf("  학생  이름: %s\n" , st.name);
					printf("  학생  학번: %d\n" , st.id);
					
		while(1){
		
		printf("1.현재 수강 내역\n");
		printf("2.과거 수강 내역\n");
		printf("3.수강 신청\n");
		
		printf("4.뒤로가기\n");
		scanf("%d",&a);
	
		switch(a){

    	case 1:
    	
    		
    	#include <stdio.h>
#include "student.h"
#include "sub.h"
#include "pro.h"
#define sub_ID 0
#define st_ID 2000
#define START_ID 1000//관리번호 1000부터 시작 교 수 
struct student st;
struct pro p;
struct sub su;

void stupdate(FILE *fp);
void menu();
void sub_f(FILE *fp);//교직원 
void sub_p(FILE *fp);//교수 
void sub_s(FILE *fp);//학생 
void print(FILE *fp);

int main()
{
	//struct student record;
	FILE *fp;
	int a;
	int id;
	char c;
	
	
	while(1) {
		
		menu();
		
		scanf("%d",&a);
		
		switch(a){

    	case 1:
    	sub_f(fp);
    		
    	break;
    	
		case 2:
		sub_p(fp);
		 
    	break;
    	
    	case 3:	
    	
    	sub_s(fp);
    	break;
		
		case 4:
		
		print(fp);
		break;	
			
		case 5:
		return 0;	
			
		}
		
		
		
		
	}
	
}
	void menu(){
	printf("    .1 Faculty \n");
	printf("    .2 propessor\n");
	printf("    .3 student\n");
	printf("    .4 정보\n");
	printf("    .5 종  료 \n");	
	}
	
	void sub_f( FILE *fp){
		int a,b;
		FILE *f;
		printf("교직원 비밀번호를 입력하시오!\n");
		scanf("%d",&b);
		 
		 if(b!=0000){
		 	printf("틀렸습니다.\n");
		 return;
		 }
		while(1){
		
		printf("1.과목 생성\n");
		printf("2.학생정보 생성\n");
		printf("3.교수정보생성\n");
		printf("4.과목 정보 보기\n");
		printf("5.학생 정보 보기\n");
		printf("6.교수 정보 보기\n");
		printf("7.뒤로가기\n");
		scanf("%d",&a);
	
		switch(a){

    	case 1:
    		
    	fp = fopen("subject.txt","ab+");
		printf("%s, %s, %s, %s\n", "과목번호","과목명","담당교수번호","강의실");
	while(	scanf("%d %s %d %s",&su.id,su.name,&su.pid,su.room)==4){
	
			fseek(fp,(su.id-START_ID)*sizeof(su),SEEK_SET);
		fwrite(&su,sizeof(su),1,fp);
	}	fclose(fp);
    	
    		
    	continue;
    	
		case 2: 
		fp = fopen("student.txt","ab+");
		printf("%s, %s\n", "학 번","이 름");
	
	while(	scanf("%d %s ",&st.id,st.name)==2){
	
		fseek(fp,(st.id-START_ID)*sizeof(st),SEEK_SET);
		fwrite(&st,sizeof(st),1,fp);
}	
		fclose(fp);

    		continue;
    	
    	case 3:	
    	
    	fp = fopen("pro.txt","ab+");
		printf("%s, %s\n", "교수ID","교수 이름");
	while(	scanf("%d %s",&p.id,p.name)==2){
	
		fseek(fp,(p.id-START_ID)*sizeof(p),SEEK_SET);
		fwrite(&p,sizeof(p),1,fp);
		fclose(fp);
    }		continue;
		
		case 4:
			
			fp = fopen("subject.txt", "rb");
		while(fread(&su, sizeof(su), 1,fp)>0)
		{	
			if(su.id != 0)
			{
				printf("==============================\n");
				printf("  과목 번호 : %d\n", su.id);
				printf("  과목 이름: %s\n", su.name);
					f = fopen("pro.txt", "rb");
   
            fseek(f, (su.pid - START_ID) * sizeof(p), SEEK_SET);
            if ((fread(&p, sizeof(p), 1, f) > 0) && (p.id != 0))
                printf("  교수 이름: %s\n" , p.name);
            else printf("레코드 %d 없음\n", su.pid);

    fclose(f);
				
				
				printf("  강의실: %s\n", su.room);
				
				printf("==============================\n");
			}
		}
		fclose(fp);
			
			
				
			
			
			
			continue;	
		case 5:
		fp = fopen("student.txt", "rb");
		while(fread(&st, sizeof(st), 1,fp)>0)
		{	
			if(st.id != 0)
			{
				printf("==============================\n");
				printf("  학생 번호 : %d\n", st.id);
				printf("  학생 이름: %s\n", st.name);
				
				 //sub 검색해서 sub.id 와 st.csub[i]랑 비교 한후에 sub  
			
				
				printf("==============================\n");
			}
		}
		fclose(fp);
		continue;	
	
	case 6:
		fp = fopen("pro.txt", "rb");
		while(fread(&p, sizeof(p), 1,fp)>0)
		{	
			if(p.id != 0)
			{
				printf("==============================\n");
				printf("  교수 번호 : %d\n", p.id);
				printf("  교수 이름: %s\n", p.name);
			
				
				printf("==============================\n");
			}
		}
		fclose(fp);
		
		continue;
		
	case 7:
	break;
		
		}
		break;


		}	
		
		
	}
	
		void sub_p( FILE *fp){
		int a;
		int id;
		int ai[10];
		FILE *f;
		printf("교수 id: ");
		
		scanf("%d",&id);
		fp = fopen("pro.txt", "rb");
   
            fseek(fp, (id - START_ID) * sizeof(p), SEEK_SET);
            if ((fread(&p, sizeof(p), 1, fp) > 0) && (p.id != 0))
                printf("----------------------\n");
				printf("  교수 이름: %s\n" , p.name);
            

    fclose(fp);
		
		while(1){
		
		printf("1.교과목 확인\n");
		printf("2.과거 강의 과목\n");
		printf("3.학생 성적 입력\n");
		printf("4.학생 성적 확인\n");
		printf("5.뒤로가기\n");
		scanf("%d",&a);
	
		switch(a){

    	case 1:
    		
    		f = fopen("subject.txt", "rb");
  	
	  
			
		 fseek(f, (1) * sizeof(su), SEEK_SET);
           while(fread(&su, sizeof(su), 1,f)>0){
		    if (su.id != 0)
			if(su.pid == id)
			{
				printf("==============================\n");
				printf("  과목 번호 : %d\n", su.id);
				printf("  과목 이름: %s\n", su.name);
				printf("  강의실: %s\n", su.room);
				printf("==============================\n");
			}
	}
		fclose(f);
			
    		
    	continue;
    	
		case 2: 
    		continue;
    	
    	case 3:	
    	
/*fp = fopen("test.txt","rb+");
    do {
        printf("수정할 학생의 학번 입력: ");
        if (scanf("%d", &id) == 1) {
            fseek(fp, (id - START_ID) * sizeof(record), SEEK_SET);
            if ((fread(&record, sizeof(record), 1, fp) > 0) && (record.id != 0))
            {
                printf("학번: %8d 이름: %4s 점수: %4d\n", 
                       record.id, record.name, record.score);
                printf("새로운 점수 입력: ");
                scanf("%d", &record.score);
                fseek(fp, -sizeof(record), SEEK_CUR);
                fwrite(&record, sizeof(record), 1, fp);
           }
           else printf("레코드 %d 없음\n", id);
        }  
        else printf("입력오류\n");

        printf("계속하겠습니까?(Y/N)");
        scanf(" %c",&c);
    } while (c == 'Y');
    fclose(fp);
    	
    	*/
    		continue;
		
		case 4:
			
			continue;
		case 5:
		break;	
			
	
		}
		break;


		}	
		
		
	}
	
		void sub_s( FILE *fp){
		int a;
		int id ;
		printf("학번 입력\n"); 
		scanf("%d",&id);
		fp = fopen("student.txt", "rb");
   
            fseek(fp, (id - st_ID) * sizeof(st), SEEK_SET);
            if ((fread(&st, sizeof(st), 1, fp) > 0) && (st.id != 0))
                printf("----------------------\n");
				printf("  학생  이름: %s\n" , st.name);
					printf("  학생  학번: %d\n" , st.id);
					
		while(1){
		
		printf("1.현재 수강 내역\n");
		printf("2.과거 수강 내역\n");
		printf("3.수강 신청\n");
		
		printf("4.뒤로가기\n");
		scanf("%d",&a);
	
		switch(a){

    	case 1:
    	
    		
    	continue;
    	
		case 2: 
    		continue;
    	
    	case 3:	
    		continue;
		
		case 4:
		break;	
			
	
		}
		break;


		}	
		
		
	}
	
	void print(FILE *fp){
	} 
	
	
	
	
	
	
	
	continue;
    	
		case 2: 
    		continue;
    	
    	case 3:	
    		continue;
		
		case 4:
		break;	
			
	
		}
		break;


		}	
		
		
	}
	
	void print(FILE *fp){
	} 
	
	
	
	
	
	
	
	case 1:
    	
    		
    	continue;
    	
		case 2: 
    		continue;
    	
    	case 3:	
    		continue;
		
		case 4:
		break;	
			
	
		}
		break;


		}	
		
		
	}
	
	void print(FILE *fp){
	} 
	
	
	
	
	
	
	
	
