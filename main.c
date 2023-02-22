//
//  main.c
//  1st programming project
//
//  Created by Ahmet Furkan Yorulmaz on 30.10.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum;
    sum=0;
    int x;
    int y;                                 //declareing integers
    int z;
    z=-128;
    int list1[]={0,0,0,0,0,0,0,0};
    int list2[]={0,0,0,0,0,0,0,0};
    int list3[]={0,0,0,0,0,0,0,0};
    
    
    printf("please enter first number: ");
    scanf("%d", &x);
    printf("please enter scond number: ");
    scanf("%d", &y);
    if(x==z){                                       //checking are x,y = -128 and their binary representation
        printf("binary form of first number: %d%d%d%d%d%d%d%d \n",list1[0]=1,list1[1],list1[2],list1[3],list1[4],list1[5],list1[6],list1[7]);
    }
    if(y==z){
        printf("binary form of second number: %d%d%d%d%d%d%d%d \n",list2[0]=1,list2[1],list2[2],list2[3],list2[4],list2[5],list2[6],list2[7]);
    }
    else{
        if(x>0){                        //binary representation pf positive x
            
            if(x>=64 && x<=127){
                list1[1]= 1;
                x= x-64;
            }
            
            if(x>=32 && x<64){
                list1[2]=1;
                x= x-32;
            }
            
            if(x>=16 && x<32){
                list1[3]=1;
                x= x-16;
            }
            
            if(x>=8 && x<16){
                list1[4]=1;
                x= x-8;
            }
            
            if(x>=4 && x<8){
                list1[5]=1;
                x=x-4;
            }
            
            if(x>=2 && x<4){
                list1[6]=1;
                x=x-2;
            }
            
            if(x>=1 && x<2){
                list1[7]=1;
                x=x-1;
            }
            printf("binary form of first number: %d%d%d%d%d%d%d%d \n", list1[0],list1[1],list1[2],list1[3],list1[4],list1[5],list1[6],list1[7]);
        }
        
        else if(x<0){                       // converting negative x,to positive and showing binary representetion
            x= x * -1;
            
            if(x>=64 && x<=127){
                list1[1]= 1;
                x= x-64;
            }
            
            if(x>=32 && x<64){
                list1[2]=1;
                x= x-32;
            }
            
            if(x>=16 && x<32){
                list1[3]=1;
                x= x-16;
            }
            
            if(x>=8 && x<16){
                list1[4]=1;
                x= x-8;
            }
            
            if(x>=4 && x<8){
                list1[5]=1;
                x=x-4;
            }
            
            if(x>=2 && x<4){
                list1[6]=1;
                x=x-2;
            }
            
            if(x>=1 && x<2){
                list1[7]=1;
                x=x-1;
            }
            ///////////
            
            if(list1[0]==1)                             // invert part (X)
                list1[0]=0;
            else
                list1[0]=1;
            
            if(list1[1]==1)
                list1[1]=0;
            else
                list1[1]=1;
            
            if(list1[2]==1)
                list1[2]=0;
            else
                list1[2]=1;
            
            if(list1[3]==1)
                list1[3]=0;
            else
                list1[3]=1;
            
            if(list1[4]==1)
                list1[4]=0;
            else
                list1[4]=1;
            
            if(list1[5]==1)
                list1[5]=0;
            else
                list1[5]=1;
            
            if(list1[6]==1)
                list1[6]=0;
            else
                list1[6]=1;
            
            if(list1[7]==1)
                list1[7]=0;
            else
                list1[7]=1;
            //////////////////
            
            if(list1[7]==0){                                  // adding one part
                list1[7]=1;
            }
            else if (list1[7]==1 && list1[6]==0){
                list1[7]=0;
                list1[6]=1;
            }
            else if (list1[7]==1 && list1[6]==1 && list1[5]==0){
                list1[7]=0;
                list1[6]=0;
                list1[5]=1;
            }
            else if (list1[7]==1 && list1[6]==1 && list1[5]==1 && list1[4]==0){
                list1[7]=0;
                list1[6]=0;
                list1[5]=0;
                list1[4]=1;
            }
            else if (list1[7]==1 && list1[6]==1 && list1[5]==1 && list1[4]==1 && list1[3]==0){
                list1[7]=0;
                list1[6]=0;
                list1[5]=0;
                list1[4]=0;
                list1[3]=1;
            }
            else if (list1[7]==1 && list1[6]==1 && list1[5]==1 && list1[4]==1 && list1[3]==1 && list1[2]==0){
                list1[7]=0;
                list1[6]=0;
                list1[5]=0;
                list1[4]=0;
                list1[3]=0;
                list1[2]=1;
            }
            else if (list1[7]==1 && list1[6]==1 && list1[5]==1 && list1[4]==1 && list1[3]==1 && list1[2]==1 && list1[1]==0){
                list1[7]=0;
                list1[6]=0;
                list1[5]=0;
                list1[4]=0;
                list1[3]=0;
                list1[2]=0;
                list1[1]=1;
            }
            else if (list1[7]==1 && list1[6]==1 && list1[5]==1 && list1[4]==1 && list1[3]==1 && list1[2]==1 && list1[1]==1 && list1[0]==0){
                list1[7]=0;
                list1[6]=0;
                list1[5]=0;
                list1[4]=0;
                list1[3]=0;
                list1[2]=0;
                list1[1]=0;
                list1[0]=1;
            }
            printf("binary form of first number: %d%d%d%d%d%d%d%d \n", list1[0],list1[1],list1[2],list1[3],list1[4],list1[5],list1[6],list1[7]);
        }
        
        //-----------------------------------------------------------------------
        if(y>0){                                  // binary form of positive y
            
            if(y>=64 && y<=127){
                list2[1]= 1;
                y= y-64;
            }
            
            if(y>=32 && y<64){
                list2[2]=1;
                y= y-32;
            }
            
            if(y>=16 && y<32){
                list2[3]=1;
                y= y-16;
            }
            
            if(y>=8 && y<16){
                list2[4]=1;
                y= y-8;
            }
            
            if(y>=4 && y<8){
                list2[5]=1;
                y=y-4;
            }
            
            if(y>=2 && y<4){
                list2[6]=1;
                y=y-2;
            }
            
            if(y>=1 && y<2){
                list2[7]=1;
                y=y-1;
            }
            printf("binary form of second number: %d%d%d%d%d%d%d%d \n", list2[0],list2[1],list2[2],list2[3],list2[4],list2[5],list2[6],list2[7]);
        }
        
        else if(y<0){                              //   converting negative y to positve form and binary representation
            y= y * -1;
            
            if(y>=64 && y<=127){
                list2[1]= 1;
                y= y-64;
            }
            
            if(y>=32 && y<64){
                list2[2]=1;
                y= y-32;
            }
            
            if(y>=16 && y<32){
                list2[3]=1;
                y= y-16;
            }
            
            if(y>=8 && y<16){
                list2[4]=1;
                y= y-8;
            }
            
            if(y>=4 && y<8){
                list2[5]=1;
                y=y-4;
            }
            
            if(y>=2 && y<4){
                list2[6]=1;
                y=y-2;
            }
            
            if(y>=1 && y<2){
                list2[7]=1;
                y=y-1;
            }
            ///////////
            
            if(list2[0]==1)                              //inverting part
                list2[0]=0;
            else
                list2[0]=1;
            
            if(list2[1]==1)
                list2[1]=0;
            else
                list2[1]=1;
            
            if(list2[2]==1)
                list2[2]=0;
            else
                list2[2]=1;
            
            if(list2[3]==1)
                list2[3]=0;
            else
                list2[3]=1;
            
            if(list2[4]==1)
                list2[4]=0;
            else
                list2[4]=1;
            
            if(list2[5]==1)
                list2[5]=0;
            else
                list2[5]=1;
            
            if(list2[6]==1)
                list2[6]=0;
            else
                list2[6]=1;
            
            if(list2[7]==1)
                list2[7]=0;
            else
                list2[7]=1;
            //////////////////
            
            if(list2[7]==0){                                                           //adding one part
                list2[7]=1;
            }
            else if (list2[7]==1 && list2[6]==0){
                list2[7]=0;
                list2[6]=1;
            }
            else if (list2[7]==1 && list2[6]==1 && list2[5]==0){
                list2[7]=0;
                list2[6]=0;
                list2[5]=1;
            }
            else if (list2[7]==1 && list2[6]==1 && list2[5]==1 && list2[4]==0){
                list2[7]=0;
                list2[6]=0;
                list2[5]=0;
                list2[4]=1;
            }
            else if (list2[7]==1 && list2[6]==1 && list2[5]==1 && list2[4]==1 && list2[3]==0){
                list2[7]=0;
                list2[6]=0;
                list2[5]=0;
                list2[4]=0;
                list2[3]=1;
            }
            else if (list2[7]==1 && list2[6]==1 && list2[5]==1 && list2[4]==1 && list2[3]==1 && list2[2]==0){
                list2[7]=0;
                list2[6]=0;
                list2[5]=0;
                list2[4]=0;
                list2[3]=0;
                list2[2]=1;
            }
            else if (list2[7]==1 && list2[6]==1 && list2[5]==1 && list2[4]==1 && list2[3]==1 && list2[2]==1 && list2[1]==0){
                list2[7]=0;
                list2[6]=0;
                list2[5]=0;
                list2[4]=0;
                list2[3]=0;
                list2[2]=0;
                list2[1]=1;
            }
            else if (list2[7]==1 && list2[6]==1 && list2[5]==1 && list2[4]==1 && list2[3]==1 && list2[2]==1 && list2[1]==1 && list2[0]==0){
                list2[7]=0;
                list2[6]=0;
                list2[5]=0;
                list2[4]=0;
                list2[3]=0;
                list2[2]=0;
                list2[1]=0;
                list2[0]=1;
            }
            
            printf("binary form of second number:%d%d%d%d%d%d%d%d\n",list2[0],list2[1],list2[2],list2[3],list2[4],list2[5],list2[6],list2[7]);
        }
    }
    
    list3[0]=list1[0]+list2[0];                                //adding together 2 random binary number
    list3[1]=list1[1]+list2[1];
    list3[2]=list1[2]+list2[2];
    list3[3]=list1[3]+list2[3];
    list3[4]=list1[4]+list2[4];
    list3[5]=list1[5]+list2[5];
    list3[6]=list1[6]+list2[6];
    list3[7]=list1[7]+list2[7];
    
    if(list3[7]==2){
        list3[7]=0;
        list3[6]= list3[6]+ 1;
    }
    else if(list3[7]==3){
        list3[7]=1;
        list3[6]= list3[6]+ 1;
    }
    if(list3[6]==2){
        list3[6]=0;
        list3[5]= list3[5]+ 1;
    }
    else if(list3[6]==3){
        list3[6]=1;
        list3[5]= list3[5]+ 1;
    }
    if(list3[5]==2){
        list3[5]=0;
        list3[4]= list3[4]+ 1;
    }
    else if(list3[5]==3){
        list3[5]=1;
        list3[4]= list3[4]+ 1;
    }
    if(list3[4]==2){
        list3[4]=0;
        list3[3]= list3[3]+ 1;
    }
    else if(list3[4]==3){
        list3[4]=1;
        list3[3]= list3[3]+ 1;
    }
    if(list3[3]==2){
        list3[3]=0;
        list3[2]= list3[2]+ 1;
    }
    else if(list3[3]==3){
        list3[3]=1;
        list3[2]= list3[2]+ 1;
    }
    if(list3[2]==2){
        list3[2]=0;
        list3[1]= list3[1]+ 1;
    }
    else if(list3[2]==3){
        list3[2]=1;
        list3[1]= list3[1]+ 1;
    }
    if(list3[1]==2){
        list3[1]=0;
        list3[0]= list3[0]+ 1;
    }
    else if(list3[1]==3){
        list3[1]=1;
        list3[0]= list3[0]+ 1;
    }
    if(list3[0]==2){
        list3[0]=0;
    }
    else if (list3[0]==3){
        list3[0]=1;
    }
   
    if(list3[7]==1)                              //converting to decimal representation
        sum= sum+1;
    else
        sum=sum;
    if(list3[6]==1)
        sum= sum+2;
    else
        sum=sum;
    if(list3[5]==1)
        sum= sum+4;
    else
        sum=sum;
    if(list3[4]==1)
        sum= sum+8;
    else
        sum=sum;
    if(list3[3]==1)
        sum= sum+16;
    else
        sum=sum;
    if(list3[2]==1)
        sum= sum+32;
    else
        sum=sum;
    if(list3[1]==1)
        sum= sum+64;
    else
        sum=sum;
    if(list3[0]==1)
        sum= sum-128;
    else
        sum=sum;
    
   printf("binary form of result: %d%d%d%d%d%d%d%d \n", list3[0],list3[1],list3[2],list3[3],list3[4],list3[5],list3[6],list3[7]);
    printf("decimal form of result: %d\n", sum);
    
    return 0;
}
