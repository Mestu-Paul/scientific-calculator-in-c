#include<stdio.h>
#include<math.h>
#include<string.h>
#define e 2.7182818285
#define pi acos(-1)
#define ll long long
int hex[16][4],oct[8][3];
int max(int a, int b)
{
    if(a>=b)
        return a;
    return b;
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    while(a%b!=0)
    {
        a%=b;
        int tmp=a;
        a=b;
        b=tmp;
        if(b==0)
            return a;
    }
    return b;
}
void view()
{
    printf("                      exit(0)                     \n");
    printf("x^2(1)         x^y(2)        log>base_10(3)    log>base_any(4)\n");
    printf("x^-1(5)        x^-y(6)       ln>base_e(7)      e^x(8)         \n");
    printf("|x|(9)         sin(10)       cos(11)           tan(12)        \n");
    printf("ENG(13)        sin^-1(14)    cos^-1(15)        tan^-1(16)     \n");
    printf("add<+>(17)     sub<->(18)    mul<x>(19         div</>(20)     \n");
    printf("%c(21)          nCr(22)       nPr(23)           |Z|->complex(24)\n",'%');
    printf("r_complex(25)  mat_add(26)   mat_sub(27)       mat_mul(28)    \n");
    printf("degTorad(29)   radTodeg(30)  pi(31)            a/b<not_fractional>(32)\n");
    printf("binTodec(33)   binTooct(34)  binTohex(35)      decTobin(36)\n");
    printf("decTooct(37)   decTohex(38)  octTodec(39)      octTobin(40)\n");
    printf("octTohex(41)\n");
}
double px(char *ch)
{
    double x;
    printf("Enter a value(%s): ",ch);
    scanf("%lf",&x);
    return x;
}
void fill_hex_oct()
{
    oct[0][0]=0;
    oct[0][1]=0;
    oct[0][2]=0;
    oct[1][0]=0;
    oct[1][1]=0;
    oct[1][2]=1;
    oct[2][0]=0;
    oct[2][1]=1;
    oct[2][2]=0;
    oct[3][0]=0;
    oct[3][1]=1;
    oct[3][2]=1;
    oct[4][0]=1;
    oct[4][1]=0;
    oct[4][2]=0;
    oct[5][0]=1;
    oct[5][1]=0;
    oct[5][2]=1;
    oct[6][0]=1;
    oct[6][1]=1;
    oct[6][2]=0;
    oct[7][0]=1;
    oct[7][1]=1;
    oct[7][2]=1;

}
ll oneTon(ll n, ll r)
{
    ll ans=1;
    for(ll i=r; i<=n; i++)
        ans*=i;
    return ans;
}
int main()
{
    int click_button=0;
    view();
    fill_hex_oct();
    char yesno[10];
    while(1)
    {
        if(click_button)
        {
            printf("Do you want to back home : Yes or No(Y/n)\n");
            scanf("%s",yesno);
            if(yesno[0]=='Y'||yesno[0]=='y')
                view();
        }
        printf("choice one option: ");
        scanf("%d",&click_button);
        if(click_button==0)
            return 0;
        double x,y,z;
        int a,b,c;
        if(click_button==1)
        {
            x=px("x");
            printf("%0.2lf\n",x*x);
        }
        else if(click_button==2)
        {
            x=px("x");
            y=px("y");
            printf("%0.2lf\n",pow(x,y));
        }
        else if(click_button==3)
        {
            x=px("x");
            printf("%0.2lf\n",log10(x));
        }
        else if(click_button==4)
        {
            x=px("x");
            y=px("base");
            printf("%0.2lf\n",log10(x)/log10(y));
        }
        else if(click_button==5)
        {
            x=px("x");
            printf("%0.2lf\n",1.0/x);
        }
        else if(click_button==6)
        {
            x=px("x");
            y=px("y");
            printf("%0.2lf\n",1.0/pow(x,y));
        }
        else if(click_button==7)
        {
            x=px("x");
            printf("%0.2lf\n",log10(x)/log10(e));
        }
        else if(click_button==8)
        {
            x=px("x");
            printf("%0.2lf\n",pow(e,x));
        }
        else if(click_button==9)
        {
            x=px("X");
            printf("%0.2lf\n",fabs(x));
        }
        else if(click_button==10)
        {
            x=px("x");
            x = x*(pi/180.0);
            printf("%0.2lf\n",sin(x));
        }
        else if(click_button==11)
        {
            x=px("x");
            x = x*(pi/180.0);
            printf("%0.2lf\n",cos(x));
        }
        else if(click_button==12)
        {
            x=px("x");
            x = x*(pi/180.0);
            printf("%0.2lf\n",tan(x));
        }
        else if(click_button==13)
        {
            printf("Only more than 0 and real number\n");
            x=px("x");
            a=x;
            if(a==0)
                a=0;
            else
                a=log10(a)+1;
            if(a==0)
            {
                c=0;
                while(a==0)
                {
                    x*=10;
                    a=x;
                    c++;
                }
                printf("%0.2lfx10^%d\n",x,c);
            }
            else
            {
                b=pow(10,a-1);
                x/=b;
                printf("%0.2lfx10^%d\n",x,a-1);
            }
        }
        else if(click_button==14)
        {
            x = px("x");
            x = asin(x);
            x = x*(180.0/pi);
            printf("%0.2lf\n",x);
        }
        else if(click_button==15)
        {
            x = px("x");
            x = acos(x);
            x = x*(180.0/pi);
            printf("%0.2lf\n",x);
        }
        else if(click_button==16)
        {
            x = px("x");
            x = atan(x);
            x = x*(180.0/pi);
            printf("%0.2lf\n",x);
        }
        else if(click_button==17)
        {
            x=px("First_value");
            y=px("Second_value");
            printf("%0.2lf\n",x+y);

        }
        else if(click_button==18)
        {
            x=px("First_value");
            y=px("Second_value");
            printf("%0.2lf\n",x-y);

        }
        else if(click_button==19)
        {
            x=px("First_value");
            y=px("Second_value");
            printf("%0.2lf\n",x*y);

        }
        else if(click_button==20)
        {
            x=px("First_value");
            y=px("Second_value");
            if(y==0)
                printf("Math error\n");
            else printf("%0.2lf\n",x/y);
        }
        else if(click_button==21)
        {
            x=px("Enter_value");
            printf("%0.2lf\n",x/100);
        }
        else if(click_button==22)
        {
            ll n,r,n_r,tmp;
        level:
            {
                n = (ll)(px("n"));
                r = (ll)(px("r"));
                if(r>n){
                    printf("Invalid input\n");
                    goto lev;
                }
                if(n>20||r>20)
                {
                    printf("Its a large number. Enter again less than 21\n");
                    goto level;
                }
            }
            n_r=max(r,n-r);
            tmp=n-n_r;
            n=oneTon(n,n_r+1);
            r=1;
            for(ll i=2; i<=tmp; i++)r*=i;
            printf("%lld\n",n/r);
            lev:
                {

                }
        }
        else if(click_button==23)
        {
            ll n,r,n_r,tmp;
        level1:
            {
                n = (ll)(px("n"));
                r = (ll)(px("r"));
                if(n>20||r>20)
                {
                    printf("Its a large number. Enter again less than 21.\n");
                    goto level1;
                }
            }
            n=oneTon(n,n-r+1);
            printf("%lld\n",n);
        }
        else if(click_button==24)
        {
            x=px("x");
            y=px("y");
            printf("%0.2lf\n",sqrt(x*x+y*y));
        }
        else if(click_button==25)
        {
            x=px("x");
            y=px("y");
            x=atan(x/y);
            x = x*(180.0/pi);
            printf("%0.2lf\n",x);
        }
        else if(click_button==26)
        {
            a = px("First_mat_n");
            b = px("First_mat_m");
            int aa=px("Second_mat_n");
            int bb=px("Second_mat_m");
            int mat1[max(a,aa)][max(b,bb)],i,j;
            memset(mat1,0,sizeof mat1);
            printf("First matrix entry :\n");
            for(i=0; i<a; i++)
                for(j=0; j<b; j++)
                    printf("(%d,%d): ",i+1,j+1),scanf("%d",&mat1[i][j]);

            int mat2[max(a,aa)][max(b,bb)];
            memset(mat2,0,sizeof mat2);
            printf("Second matrix entry :\n");
            for(i=0; i<aa; i++)
                for(j=0; j<bb; j++)
                    printf("(%d,%d): ",i+1,j+1),scanf("%d",&mat2[i][j]);
            printf("Result:\n");
            for(i=0; i<max(aa,a); i++)
            {
                for(j=0; j<max(b,bb); j++)
                    printf("%d ",mat1[i][j]+mat2[i][j]);
                printf("\n");
            }
        }
        else if(click_button==27)
        {
            a = px("First_mat_n");
            b = px("First_mat_m");
            int aa=px("Second_mat_n");
            int bb=px("Second_mat_m");
            int mat1[max(a,aa)][max(b,bb)],i,j;
            memset(mat1,0,sizeof mat1);
            printf("First matrix entry :\n");
            for(i=0; i<a; i++)
                for(j=0; j<b; j++)
                    printf("(%d,%d): ",i+1,j+1),scanf("%d",&mat1[i][j]);

            int mat2[max(a,aa)][max(b,bb)];
            memset(mat2,0,sizeof mat2);
            printf("Second matrix entry :\n");
            for(i=0; i<aa; i++)
                for(j=0; j<bb; j++)
                    printf("(%d,%d): ",i+1,j+1),scanf("%d",&mat2[i][j]);
            printf("Result:\n");
            for(i=0; i<max(aa,a); i++)
            {
                for(j=0; j<max(b,bb); j++)
                    printf("%d ",mat1[i][j]-mat2[i][j]);
                printf("\n");
            }
        }
        else if(click_button==28)
        {
            ///matrix multiplication
        }
        else if(click_button==29)
        {
            x=px("Value_deg");
            x=(pi/180)*x;
            printf("%0.2lf\n",x);
        }
        else if(click_button==30)
        {
            x=px("Value_deg");
            x=(180.0/pi)*x;
            printf("%0.2lf\n",x);
        }
        else if(click_button==31)
        {
            printf("%0.6lf\n",pi);
        }
        else if(click_button==32)
        {
            a=px("a");
            b=px("b");
            c=gcd(a,b);
            printf("%d/%d\n",a/c,b/c);
        }
        else if(click_button==33)
        {
            char in[30];
            printf("Enter binary value: ");
            scanf("%s",in);
            int dec=0,i,n=strlen(in);
            for(i=0; i<n; i++)
            {
                if(in[i]=='1')
                    dec+=pow(2,i);
            }
            printf("%d\n",dec);
        }
        else if(click_button==34)
        {
            char in[30];
            printf("Enter binary value: ");
            scanf("%s",in);
            int dec=0,i,n=strlen(in);
            for(i=0; i<n; i++)
            {
                if(in[i]=='1')
                    dec+=pow(2,i);
            }
            printf("%o\n",dec);
        }
        else if(click_button==35)
        {
            char in[30];
            printf("Enter binary value: ");
            scanf("%s",in);
            int dec=0,i,n=strlen(in);
            for(i=0; i<n; i++)
            {
                if(in[i]=='1')
                    dec+=pow(2,i);
            }
            printf("%x\n",dec);
        }
        else if(click_button==36)
        {
            a=px("decimal_number");
            if(a==0)
                printf("0");
            else
            {
                int bin[30],i=0,j=0,k=0;
                while(a)
                {
                    if(a&1)
                        bin[i++]=1;
                    else
                        bin[i++]=0;
                    a/=2;
                }
                for(j=i-1; j>=0; j--)
                    printf("%d",bin[j]);
            }
            printf("\n");
        }
        else if(click_button==37)
        {
            a=px("decimal_number");
            printf("%o",a);
        }
        else if(click_button==38)
        {
            a=px("decimal_number");
            printf("%x",a);
        }
        else if(click_button==39)
        {
            printf("Octal_number : ");
            scanf("%o",&a);
            printf("%d\n",a);
        }
        else if(click_button==40)
        {
            a=px("Octal_number");
            if(a==0)
            {
                printf("0\n");
                continue;
            }
            int i=29,ans[30],j;
            while(a)
            {
                b=a%10;
                a/=10;
                for(j=2; j>=0; j--)
                    ans[i--]=oct[b][j];
            }
            int ok=0;
            for(j=i+1; j<30; j++)
            {
                if(!ok&&ans[j]==0)
                    continue;
                ok=1;
                printf("%d",ans[j]);
            }
            printf("\n");
        }
        else if(click_button==41)
        {
            printf("Octal_number : ");
            scanf("%o",&a);
            printf("%x\n",a);
        }
        else
            printf("Invalid choice\n");
    }
}
