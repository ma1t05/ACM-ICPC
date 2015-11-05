#include <iostream>

using namespace std;

class digits{
    public:
    int a[10];
    digits();
    digits(int b);
    void set(int n,int b);
    digits operator-(digits& B)const;
};

digits::digits(){
    for(int i=0;i<10;i++)
        a[i]=0;
}

digits::digits(int b){
    for(int i=0;i<10;i++)
        a[i]=0;
    int k=1,d,r=0;
    if(b){
    a[b%10]=1;
    while(b){
        int c=b%10;
        for(int i=c-1;i>0;i--){
            a[i]+=k;
        }
        for(int j=1;j<10;j++)
            a[j]+=c*r*k/10;
        d=b/10;
        if(d){
            a[0]+=k+c*r*k/10;
            while(d){
                a[d%10]+=(c+1)*k;
                d/=10;
            }
        }
        else{
            while(d){
                a[d%10]+=c*k;
                d/=10;
            }
        }

        k*=10;
        r++;
        b/=10;
    }
    }

}

void digits::set(int n,int b){
    a[n]=b;
}

digits digits::operator-(digits& B) const{
    digits C;
    for(int i=0;i<10;i++)
        C.set(i,a[i]-B.a[i]);
    return C;
}

ostream& operator<<(ostream& os, digits const& B){
    for(int i=0;i<10;i++){
        os << B.a[i];
        if(i<9) os << " ";
    }
    os << endl;
    return os;
}

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)&&a){
        digits A(a-1),B(b);
        cout << A << B << endl;
        cout << B-A;
    }
    return 0;
}
