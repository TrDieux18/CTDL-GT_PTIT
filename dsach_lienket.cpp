#include<bits/stdc++.h>

using namespace std;

struct canbo{
	long maso;
	char hoten[8];
};

struct node{
	canbo info;
	node *next;
};

struct danhsach{
	node *pfirst,*plast;
	int tongsocb;
	canbo dscb[100];
};

void khoitao(danhsach &d){
	d.pfirst = d.plast = NULL;
	do{
		cout<<"Nhap so can bo: ";
		cin >>d.tongsocb;
	}while(d.tongsocb > 100);
	for(int i = 0; i < d.tongsocb; i++){
		cout<<"Nhap maso hoten: ";
		cin >>d.dscb[i].maso>>d.dscb[i].hoten;
	}
}

int check_null(danhsach d){
	return d.pfirst == NULL;
}

void nhap(canbo &x){
	cout<<"Nhap maso hoten: ";
	cin >> x.maso >> x.hoten;
}

node *makenode(canbo x){
	node *p = new node;
	p->info=x;
	return p;
}

void add_first(danhsach &d, canbo x){
	node *p = makenode(x);
	p->next=d.pfirst;
	if(check_null(d)){
		d.pfirst=d.plast=p;
		return;
	}
	d.pfirst=p;
}

void add_last(danhsach &d, canbo x){
	node *p = makenode(x);
	p->next = NULL;
	if(check_null(d)){
		d.pfirst=d.plast = p;
		return;
	}
	d.plast->next = p;
	d.plast=p; 
}

void xem(danhsach d){
	node *p = d.pfirst;
	while(p != NULL){
		cout << p->info.maso<<"\t"<<p->info.hoten<<"\n";
		p = p->next;
	} 
} 

void xoadau(danhsach &d){
	if(check_null(d)) return;
	node *p = d.pfirst;
	d.pfirst = p->next;
	delete p;
	if(d.pfirst == NULL) d.plast = NULL;
}

void xoacuoi(danhsach &d){
	if(check_null(d)) return;
	node *p=d.pfirst;
	if(p->next==NULL){
		delete p;
		khoitao(d);
		return;
	}
	node *q = new node;
	while(p->next != NULL){
		q = p;
		p = p->next;
	}
	q->next=NULL;
	d.plast=q;
	delete p;
}

int demcb(danhsach d){
	node *p=d.pfirst;
	int dem = 0;
	while(p!=NULL){
		p = p->next;
		dem++;
	}
	return dem;
}

void add_previous_k(danhsach &d, int k){
	if(k <0 || k > demcb(d)) return;
	canbo x;
	nhap(x);
	if(k==0){
		add_first(d,x);
		return;
	}
	node *q = d.pfirst;
	for(int i = 1; i < k ; i++) q = q->next;
	if(q->next == NULL){
		add_last(d,x);
		return;
	}
	node *p = makenode(x);
	p->next = q->next;
	q->next = p;
}
                                                                                                                                                            
void add_next_k(danhsach &d, int k){
	if(k <0 || k > demcb(d)) return;
	canbo x;
	nhap(x);
	if(k==0){
		add_first(d,x);
		return;
	}
	node *q = d.pfirst;
	for(int i = 1; i <= k ; i++) q = q->next;
	if(q->next == NULL){
		add_last(d,x);
		return;
	}
	node *p = makenode(x);
	p->next = q->next;
	q->next = p;
}

void xoak(danhsach &d, int k){
	if(k <= 0 || k > demcb(d)) return;
	if(k==1){
		xoadau(d);
		return;
	}
	node *p = d.pfirst,*q;
	for(int i = 1; i < k; i++){
		q=p;
		p=p->next;
	}
	if(p->next == NULL){
		xoacuoi(d);
		return;
	}
	q->next=p->next;
	delete p;
}

void xoads(danhsach &d){
	if(check_null(d)) return;
	node *p = d.pfirst;
	while(d.pfirst != NULL){
		p = p->next;
		delete d.pfirst;
		d.pfirst=p;
	}
	d.plast = NULL;
}

void search_ms(danhsach d){
	long ms;
	cout<<"Nhap maso: ";
	cin >> ms;
	node *p = d.pfirst;
	while(p != NULL){
		if(p->info.maso == ms) cout << p->info.maso<<"\t"<<p->info.hoten<<"\n";
		p = p->next;
	}
}

int main(){
	int t = 1;
	danhsach d;
	int k;
	char c;
	canbo x;
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
		     add_first(d,x);
			 break;
          case '4':
		     add_last(d,x); 
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
        //   case '10':
		//      search_ms(d);
		// 	 break;
        //   case '11':
		//      xoads(d);
		// 	 break;
          if(!check_null(d)) 
		     add_first(d,x); 
		  else 
		      cout<<"danh sach day\n";
        }
	}
	return 0;
}
