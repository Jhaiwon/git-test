#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{
	int i;
	char name32[33][8]={"한가인", "김태희", "최지우", "김아중", "윤아", "티파니", "나르샤", "가인", "한채영", "송혜교", 
 "선미", "소희", "박정아", "서인영", "고아라", "이연희", "황정음", "신세경", "한지민", "문근영","신봉선", "김신영",  
"전지현", "이나영", "박신혜", "윤은혜", "정려원", "박은혜", "한효주", "박민영", "김민정", "고은아"};
	char fav_name[7];
	char name16[16][7];
	char name8[8][7];
	char name4[4][7];
	char name_f[2][10];
	char winner[1][7];
	
	printf("\t\t지 금 시 작 합 니 다\n");
	printf("\n------------------------32강------------------------\n");
	sleep(600);
	for(i=0; i<32; i+=2)
	{
		fflush(stdin);
		printf("\n%s %s\n",name32[i],name32[i+1]);
		printf("선택!!: ");scanf("%s",fav_name);
		if(strcmp(fav_name,name32[i])==0)
		{
			strcpy(name16[i/2],fav_name);
		
		}
		else if(strcmp(fav_name,name32[i+1])==0)
		{
			strcpy(name16[i/2],fav_name);
		
		}
		else
		{
			printf("세글자도 못치는 바보.. 흑... 커...컨..트...로..ㄹ..씨....좀...눌ㄹ...ㅓ\n");
			return 0;
		}
		
	}
	fflush(stdin);

	printf("------------------------16강------------------------\n");
	printf("\n시작됩니다.........\n");
	Sleep(400);

	for(i=0; i<16; i+=2)
	{
		fflush(stdin);
		printf("\n%s %s\n",name16[i],name16[i+1]);
		printf("선택!!: ");scanf("%s",fav_name);
		if(strcmp(fav_name,name16[i])==0)
		{
			strcpy(name8[i/2],fav_name);
			
		}
		else if(strcmp(fav_name,name16[i+1])==0)
		{
			strcpy(name8[i/2],fav_name);
		
		}
		else
		{
			printf("세글자도 못치는 바보.. 흑...커...컨..트...로..ㄹ..씨....좀...눌ㄹ...ㅓ\n");
			return 0;
		}
		
	}
	fflush(stdin);
	
	printf("------------------------8강------------------------\n");
	printf("\n시작됩니다.........\n");
	Sleep(400);

	for(i=0; i<8; i+=2)
	{
		fflush(stdin);
		printf("\n%s %s\n",name8[i],name8[i+1]);
		printf("선택!!: ");scanf("%s",fav_name);
		if(strcmp(fav_name,name8[i])==0)
		{
			strcpy(name4[i/2],fav_name);
		
		}
		else if(strcmp(fav_name,name8[i+1])==0)
		{
			strcpy(name4[i/2],fav_name);
			
		}
		else
		{
			printf("세글자도 못치는 바보.. 흑...커...컨..트...로..ㄹ..씨....좀...눌ㄹ...ㅓ\n");
			return 0;
		}
		
	}
	fflush(stdin);

	printf("------------------------4강------------------------\n");
	printf("\n시작됩니다.........\n");
	Sleep(400);

	for(i=0; i<4; i+=2)
	{
		fflush(stdin);
		printf("\n%s %s\n",name4[i],name4[i+1]);
		printf("선택!!: ");scanf("%s",fav_name);
		if(strcmp(fav_name,name4[i])==0)
		{
			strcpy(name_f[i/2],fav_name);
			
		}
		else if(strcmp(fav_name,name4[i+1])==0)
		{
			strcpy(name_f[i/2],fav_name);
			
		}
		else
		{
			printf("세글자도 못치는 바보.. 흑...커...컨..트...로..ㄹ..씨....좀...눌ㄹ...ㅓ.\n");
			return 0;
		}
		
	}

	printf("★★★★★★★★★결승전★★★★★★★★★\n");
	
	Sleep(2000);

	fflush(stdin);
	printf("\n%s %s\n",name_f[0],name_f[1]);
	printf("선택!!: ");scanf("%s",fav_name);
	strcpy(winner[1],fav_name);
	if(strcmp(fav_name,name_f[0])==0){}
	else if(strcmp(fav_name,name_f[1])==0){}
	
	Sleep(3000);
	printf("\n*****************최종 우승은 %s!!!!*****************\n",winner[1]);

	
	printf("\nCtrl+c를 눌러 종료 시키십시요\n");
	Sleep(10000);
	return 0;
	}