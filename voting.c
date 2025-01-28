#include<stdio.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "Narendra Modi"
#define CANDIDATE2 "Mamata Banerjee"
#define CANDIDATE3 "Yogi Adityanath"
#define CANDIDATE4 "Naveen Patnaik"
int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0;
void castVote(){
int select ;
printf("Please choose your Candidate: \n");
printf("\n 1. %s",CANDIDATE1);
printf("\n 2. %s",CANDIDATE2);
printf("\n 3. %s",CANDIDATE3);
printf("\n 4. %s",CANDIDATE4);
printf("\n Give the input between (1 - 4): ");
scanf("%d",&select);
switch(select){
 case 1: votesCount1++; break;
 case 2: votesCount2++; break;
 case 3: votesCount3++; break;
 case 4: votesCount4++; break;
 default: printf("\n Error: Wrong Choice !! Please retry");
//hold the screen
getchar();
}
printf("\n\n Thanks for your vote \n\n");
}
void votesCount(){
printf("\n\n Voting Statics ");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
}
void getLeadingCandidate (){
 printf("\n Leading Candiate in the voting \n");
 if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1
>votesCount4)
printf("[%s]",CANDIDATE1);
 else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2
>votesCount1)
 printf("[%s]",CANDIDATE2);
 else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3
>votesCount1)
 printf("[%s]",CANDIDATE3);
 else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4
>votesCount3)
 printf("[%s]",CANDIDATE4);
 else
 printf(" !! No Wining Situation ");
}
int main()
{
int i;
int select;
int age;
printf("GREETINGS TO THE VOTER\n");
printf("PLS FILL THE GIVEN DETAILS TO VOTE---> \n");
printf("ENTER YOUR AGE \n");
scanf("%d",&age);
if(age>=18)
{
 printf("ELIGIBLE TO VOTE \n");
 printf("YOUR FUTURE IN YOUR VOTE \n");
}
else
{
 printf("SORRY YOUR NOT ELIGIBLE TO VOTE\n");
}
while(age>=18){
printf(" \n\n Welcome to Election/Voting 2023 \n");
printf("1) Cast the Vote \n");
printf("2) Total number of Votes for each candidate \n");
printf("3) leading Candidate in the voting \n");
printf("Please Select any option: \n");
scanf("%d", &select);
switch(select)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(select!=0);
getchar();
return 0;
}