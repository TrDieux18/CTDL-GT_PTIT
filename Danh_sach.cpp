#include<iostream>
#include<string.h>

using namespace std;

struct canbo{
	long maso;
	char hoten[8];
};
struct danhsach{
	canbo dscb[100];
	int tongsocb;
};

void khoitao(danhsach &d){
	do{
		cout<<"Nhap so can bo: ";
		cin >> d.tongsocb;
	}while(d.tongsocb > 100);
	for(int i=0; i < d.tongsocb; i++){
		cout<<"Nhap maso hoten: ";
		cin >> d.dscb[i].maso >>d.dscb[i].hoten;
	}
}

void xem(danhsach d){
	for(int i = 0; i < d.tongsocb; i++){
		cout << d.dscb[i].maso<<"\t"<<d.dscb[i].hoten<<"\n";
	}
}

int check_null(danhsach d){
	return (d.tongsocb == 0);
}
int check_full(danhsach d){
	return (d.tongsocb == 100);
}

void add_first(danhsach &d){
	canbo tmp;
	cout <<"Nhap maso hoten: ";
	cin >> tmp.maso >>tmp.hoten;
	d.tongsocb++;
	for(int i = d.tongsocb; i > 0; i--){
		d.dscb[i] = d.dscb[i-1];
	}
	d.dscb[0] = tmp;
}

void add_last(danhsach &d){
	cout<<"Nhap maso hoten:";
	int n =  d.tongsocb;
	cin >> d.dscb[n].maso>>d.dscb[n].hoten;
	d.tongsocb++;
}

void add_next_k(danhsach &d, int &k){
	cout<<"Nhap k: ";
	cin >> k;
	if(k <0 || k > d.tongsocb) return;
	for(int i = d.tongsocb; i > k; i--) d.dscb[i]=d.dscb[i-1];
	cout<<"Nhap maso hoten: ";
	cin >> d.dscb[k+1].maso >> d.dscb[k+1].hoten;
	d.tongsocb++;
}

void add_previous_k(danhsach &d, int &k){
	cout<<"Nhap k: ";
	cin >> k;
	if(k <0 || k > d.tongsocb) return;
	for(int i = d.tongsocb; i >=k; i--){
		d.dscb[i] = d.dscb[i-1];
	} 
	cout<<"Nhap maso hoten: ";
	cin >> d.dscb[k-1].maso >> d.dscb[k-1].hoten;
	d.tongsocb++;
}

void xoadau(danhsach &d){
	for(int  i = 1; i < d.tongsocb; i++){
		d.dscb[i-1] = d.dscb[i];
	}
	d.tongsocb--;
}

void xoacuoi(danhsach &d){
	d.tongsocb--;
}

void xoak(danhsach &d, int k){
	cout <<"Nhap k: ";
	cin >> k;
	if(k <0 || k > d.tongsocb) return;
	for(int i = k; i < d.tongsocb-1; i++) d.dscb[i] = d.dscb[i+1];
	d.tongsocb--;
} 

void xoatoanbo(danhsach &d){
	d.tongsocb = 0;
}

void search_ms(danhsach d){
	long ms;
	cout <<"Nhap maso: ";
	cin >> ms;
	for(int i = 0; i < d.tongsocb; i++){
		if(ms == d.dscb[i].maso) 
		  cout<<d.dscb[i].maso<<"\t"<<d.dscb[i].hoten<<"\n";
	} 
}
int main(){
	int t = 1;
	danhsach d;
	int k;
	char c;
	while(t){
		cout<<"0.thoat\n";
        cout<<"1.khoitao\n";
        cout<<"2.xem\n";
        cout<<"3.them dau\n";
        cout<<"4.them cuoi\n";
        cout<<"5.them truoc vi tri k\n";
        cout<<"6.them sau vi tri k\n";
        cout<<"7.xoa dau\n";
        cout<<"8.xoa cuoi\n";
        cout<<"9.xoa vi tri k\n";
        cout<<"10.tim can bo theo ma so\n";
        cout<<"11.xoa toan bo danh sach \n";
        cin>>c;
        switch(c){
          case '0':
		     t=0; 
			 break;
          case '1': 
		     khoitao(d);
			 break;
          case '2':
		     xem(d);
			 break;
          case '3':
		     add_first(d) ;
			 break;
          case '4':
		     add_last(d); 
		     break;
          case '5':
		     add_previous_k(d,k);
			 break;
          case '6':
		     add_next_k(d,k);
			 break;
          case '7':
		     xoadau(d);
			 break;
          case '8':
		     xoacuoi(d);
			 break;
          case '9':
		     xoak(d,k);
			 break;
          case '10':
		     search_ms(d);
			 break;
          case '11':
		     xoatoanbo(d);
			 break;
          if(!check_full(d)) 
		     add_first(d); 
		  else 
		      cout<<"danh sach day\n";
        }
	}
	return 0;
} 
