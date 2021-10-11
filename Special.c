//bismillah 
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int count=0,i,q,j,rating,score;
void credits();
int main(){
	int i,j;
	char choice,choice2,choice1,choice3,choice4,choice5;
	char password[20];
char pass[20]="ffl";
	char entrdname[20];

		printf("\n\n\n\n\t\t\t\t************ For someone special ****************");
		printf("\n\n\n\n\t\t\t\t\t\tpress Y to continue \n\n\n\n\n");
		choice=toupper(getch());
		if(choice=='Y'){
			system("cls");
	logging:
		printf("\n\n\n\t\t\t Enter your name : ");
			gets(entrdname);
				printf("\n\n\n\t\t\t Enter password :");
	scanf("%s",&password);
	system("cls");
       	if(strcmp(pass,password)==0){
			printf("\n\n\n\t\t\tYeah thats you!!");
			printf("\n\n\t\t\tPress enter");
			getch();
			}
		else if(strcmp(pass,password)!=0){
			printf("\n\n\n\t\tAh crap!! enter crct password");
			getch();
			system("cls");
			goto logging;
		}	
		system("cls"); 
		printf("\n\n\n\n\n\t\t\t\tHappy bithday to you ji ^_^ \n\n");
		}
		getch();
		system("cls");
		printf("\n\n\n\n\t\t\t\tDo you wanna know how important are you to me......?");
		getch();
		system("cls");
		printf("\n\n\n\n\n\t\t\t\tlike the way jerry is important to tom \n\n\n\n\n\n");
		getch();
		system("cls");
	printf("\n\n\tDo you wanna know what sandhya mean to me ");//special,adentANDamazing,naughty,determinant deserving and dear to me,headache,yedipinchina modati ammayi,ala gurunanak clg lo
		printf("");
	printf("\n\n\t\tPress Enter\n\n\n");
	getch();
	system("cls");	
	printf("\n\n\tSpecial\n\n\n");
	getch();
	system("cls");
	printf("\n\n\tAdrent and Amazing\n\n\n");
	getch();
	system("cls");
	printf("\n\n\tNaughty \n\n\n");
	getch();
	system("cls");
	printf("\n\n\tkinda Determinant , Deserving and Dear to me\n\n\n");
	getch();
	system("cls");
	printf("\n\n\tInka saal thi masth pogidesnav aapu nee overaction antav anthe kada....sare!!!");
	getch();
	system("cls");
	printf("\n\n\tH for Headache\n\n\n");
	getch();
	system("cls");
	printf("\n\n\tY for nannu Yedipinchina modhati pilla (>_<)\n\n\n");
	getch();
	system("cls");
	printf("\n\n\tA for Ala gurunanak collage lo......apudappude oka friend(girl) kosam vetukutunna abbayi,\n\tmuslims ante padani oka ammayi....");
	printf("\n\tChinna palukarimputho modhalaindi aa kathaa......\n\tmatladangane thane naa life long bestfriend ani fix ayina abbayi.....");
	printf("\n\tAmmayi ki inka sarigga abbayi meeda nammakam raani samayam adi......");
	printf("\n\tHaha appudu konchem unmatured kada aame rose istheney frindship continue cheddam anukunnadu abbayi.");
	printf("\n\tAla anukunnate aame rose ivvadam tana matalu ataniki nachadam tana gurinchi teluskovadam \n\taame atani gurinchi telusukovadam tanaki elanti problem vachina i wont let her down ani atanu anukovadam");
	printf("\n\tAla modalaindi vari sneham.....");
	printf("\n\tEvvaru mem friends ani chepthe nammani samayam adi....");
	printf("\n\tAmmayilu abbayilu friends ga undaleru ammayifrnds are passing clouds ani anukunevadu.\n\tEndukante vadi life lo alane jarigindi");
	printf("\n\tA boy never changes untill a perfect girl comes\n\tHe dont know why, he always wanted her happy see her smiling laughing talking.....");
	printf("\n\tShe once said whenever im sad i speak with u, my mood changes....it turns to good!!!");
	printf("\n\tHe dont know why she seems different than any other girl to him ");
	printf("\n\tHe never had lust on her");
	printf("\n\tPerfect frindship never existed in world btwn a girl and guy like this");
	printf("\n\tHahaha but aa abbayi ki konchem possesiveness konchem ekkuvaga undedhi le...");
	printf("\n\tFinally this all conclude that they are born to be friends...sry sry bestfriends*");
	getch();
	system("cls");
	printf("\n\n\tkaisa laga sandy mera poem....^_~");
	printf("\n\n\tAgar accha laga tho S dabaiye");
	printf("\n\tBura laga tho N dabayiye");
	choice5=toupper(getch());
	system("cls");
	if(choice5='S'){
		printf("\n\n\tShukriya Shukriya!!!\n\n");
	}
	else if(choice5='N'){
		printf("\n\n\tBewakoof ladki Taste kuch bhi nahi hai tereko\n\n");
	}
	printf("\tEnter dabayiye.....");
	getch();
	system("cls");
		printf("\n\n\n\n\t\t\t\tlets do some quick questionare ");
		printf("\n\n\t\t\t\tpress Y to enter the questionare ");		
		printf("\n\n\n\n\n\t\t\t\t\tLetz have some fun here ^_~\n\n\n\n\n");
		choice2=toupper(getch());
		if(choice2=='Y'){
			system("cls");
			printf("\n\n\n\n\t\t\t\twe are now entering......");
			printf("\n\n\n\n\t\t\t\tpress any key\n\n\n\n\n\n");}
			getch();system("cls");
	menu:
		printf("\n\n\n\t\tMenu:");
		printf("\n\t\t\t Press S to start the game");
	//	printf("\n\t\t\t Press V to show the score");
	//	printf("\n\t\t\t Press R to reset score");
		printf("\n\t\t\t Press Q to quit\n\n\n\n\n\n");
		choice1=toupper(getch());
		if(choice1=='S'){
			goto questionare;
		}
	/*	else if(choice1=='V'){
			show_score();getch();
			void creditstosandhya();
	}
		else if(choice1=='R'){
			reset_score();
			getch();
			void creditstosandhya();
		}*/
		else if (choice1=='Q'){ 
			exit(1);
		}		
	
		questionare:
		printf("\n\n\n\n\t\t\t\t Each questionn carries ONE mark\n\n\n\n\n");
        printf("\n\tpress enter");
        getch();
			system("cls");
			for(i=1;i<=10;i++){
				system("cls");
				q=i;
			switch(q){
				case 1:
				printf("\n\nWho is your Bestfriend ?");
				printf("\n\nA.Afsar\t\tB.Afsar\n\nC.Afsar\t\tD.Afsar");
				if(toupper(getch())){
						printf("\n\nCorrect!!!");
						count++;
						getch();
						break;
					}
				case 2:
				printf("\n\nWhat is the first ever gift i had given to you ?");
				printf("\n\nA.A chocolate\t\tB.A purse\n\nC.My friendship\t\tD.Myself");
				printf("\n\nNOte:Answer wise kitty every mark matters hahahaha");
					if(toupper(getch())=='C'){
						printf("\n\ncorrect!!!");
						count++;
						getch();
						break;
						
					}
					else{
						printf("\n\nWrong answer :(");
						getch();
						break;
						
					}
				case 3:
				printf("\n\nYou know how much do i Love you ?");
				printf("\n\nA.100percent\t\tB.90percent\n\nC.99.99percent\t\tD.99percent");
					if(toupper(getch())=='A'){
						printf("\n\ncorrect!!!");
						count++;
						getch();
						break;}
					else{
						printf("\n\nWrong answer :(");
						getch();
						break;
					}	
				case 4:
				printf("\n\nWhat is the first ever time u called me with my name?");
				printf("\n\nA.In a phone call\t\tB.At rahira madam's cabin\n\nC.At stationary\t\tD.In whatsapp");
				if(toupper(getch())=='B'){
					printf("\n\ncorrect!!!");
					count++;
					getch();
					break;
				}		
				else{
					printf("\n\nWrong answer :(");
					getch();
					break; 
				}	
				case 5:
					printf("\n\nWhat is the first song i have ever heard from you ?");
					printf("\n\nA.Tum hi ho\t\tB.Your voice");
					if(toupper(getch())=='B')
					{
						printf("\n\ncorrect!!!");
						count++;
						getch();
						break;
					}
					else{
						printf("\n\nwrong answer :(");
						getch();
						break;
					}
				case 6:
				printf("\n\nWhat is most thing i like in u ?");
				printf("\n\nA.Your voice\t\tB.Eyes\n\nC.Hair\t\tD.Crazyness");
				printf("\n\nNote:Answer wise ;-)");
				if(toupper(getch())=='D'){
				printf("\n\ncorrect!!!");
				count++;
				getch();
				break;
				}	
				else{
					printf("\n\nWrong answer :(");
					getch();
					break;
				}
			case 7:
			printf("\n\nWhen we singing songs together, what is the song i wanted to hear from you, well i asked you to sing that song ?");
			printf("\n\nA.tum hi ho\t\tB.Neelakasamlo\n\nC.Oh priya priya");
			if(toupper(getch())=='B')
			{
				printf("\n\ncorrect!!!");
				count++;
				getch();
				break;
				
				}
			else{
				printf("\n\nwrong!!!");
				getch();
				break;
			}	
			case 8:
				printf("\n\nwhat is the first ever nickname i given to you ?");
				printf("\n\nA.Jaanu\t\tB.San\n\nC.Sandy\t\tD.valli");
				if(toupper(getch())=='B'){
					printf("\n\ncorrect!!!");
					count++;
					getch();
					break;
					
				}
				else{
					printf("\n\nwrong answer!!!");
					getch();
					break;
				}
			case 9:
			printf("\n\nIn first sem,\nwhat i said that what type of friend are you to me ?");
			printf("\n\nA.A good friend\t\tB.Best friend\n\nC.Heart friend\t\tD.Just friend");
			if(toupper(getch())=='C'){
				printf("\n\ncorrect!!!");
				count++;
				getch();
				break;
			}	
			else{
				printf("\n\nWrong Answer!!!!");
				getch();
				break;
			}
			case 10:
				printf("\n\nDo you know how was, is, will be bestfriend ? ");
				printf("\n\nA.Sandhya\t\tB.Kitty\n\nC.Valli\t\tD.Meri Jerry");
				toupper(getch());
				printf("\n\ncorrect !!!");
				count++;
				getch();
				break;
					}
			}
			printf("\n\nEnd of the questionare!!!");
			printf("\n\n\n\t\tpress any key...");
			getch();
			system("cls");
			printf("\n\nHow was the questionare give rating for five ;)\n\n");
			scanf("%d",&rating);
			printf("press enter");
			getch();
			if(rating==5){
			printf("\n\n\tThankyou soo much kitty, lots of love!!Hope u enjoyed hahahaha\n\n\n\n");
			}	
			if(rating==4){
			printf("\n\n\tThankyou kitty, that mean lot to me, Hope you enjoyed hahahahhaha\n\n\n\n");
			}	
			if(rating==3){
			printf("\n\n\tHaha i know it was some what dificult,\n\tbut anyhow thankyou!!\n\n\n\n");	
			}
			if(rating==2){
			printf("\n\n\tEnduke pichidana antha matram gutuleva nee mohaniki ;[\n\n\n\n");
			}
			if(rating==1){
			printf("\n\n\tBalichinda pandi dana entha kastapadi build chesthe one isthava rating!!!\n\n\n\n");
			}
			if(rating==0){
			printf("\n\nGood Bye!!!\n\n\n\n\n");
			}	
	printf("Enter to continue\n\n\n");
	getch();		
score:
	system("cls");
	score=(float)count;
	printf("\n\n\t\tSandy, Your total score is : %d out of Ten",count);
	if(score>=4){
		printf("\n\n\tYOU HAVE DONE A GREAT JOB!!!!\n\n\n\n");
		getch();
	printf("\n\n\t\tThankyou Kitty for being you in my life, love u so much ,\n\t\tyou are the best girl in my life\n\t\t-your bestfriend #tom\n\n\n\n\n\n");	
    printf("\n\n\t\tAdios Amigo!!!\n\n\n\n\n");
    getch();
    system("cls");
    printf("\tpress A to play again\n\n");
    printf("press anykey to exit");
    choice3=toupper(getch());
    if(choice3=='A'){
	goto questionare;
    }else{
	getch();	
	exit(1);
	}

		
	}		
	else{
		printf("\n\tNeed improvement kitty!!!");
		printf("\n\n\n\n\tPress any key to continue ");
		getch();
	printf("\n\n\t\tThankyou Kitty for being YOU in my life, love u so much ,\n\t\tyou are the best girl in my life\n\t\t-your bestfriend #tom\n\n\n\n\n\n");	
    printf("\n\n\t\tAdios Amigo!!!\n\n\n\n\n");
    getch();
    system("cls");
    printf("\n\n\tpress A to play again\n\n");
    printf("\n\tpress anykey to exit");
      choice4=toupper(getch());
    if(choice4=='A'){
	goto questionare;
    }else{	
	getch();
	exit(1);	
	}
}
}
			


	

		
		
		
		
		
		
		
    		
		


