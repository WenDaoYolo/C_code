#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;
typedef int ElemType;

typedef struct LNode {
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;

Status InitList_L(LinkList &L) {
	L = new LNode;
	L->next = NULL;
	return OK;
}

void createList_F(LinkList& L, int a[]) {
	L = new LNode;
	L->next = NULL;
	for (int i = 0; i < 6; i++) {
		LinkList p = new LNode;
		p->data = a[i];
		p->next = L->next;
		L->next = p;
	}
}

void CreateList_L(LinkList& L, int a[]) {
	LNode* r;
	LNode* p;
	L = new LNode;
	L->next = NULL;
	r = L;
	for(int i = 0; i < 6; i++) {
		p = new LNode;
		p->data = a[i];
		p->next = NULL;
		r->next = p;
		r = p;
	}
}

int LengthList(LinkList L){
	LNode* p = L->next;
	int j = 1;
	while (p->next != NULL) {
		p = p->next;
		j++;
	}
		return j;
}

int LocateElem_L(LinkList L, ElemType e) {
	LNode* p;
	int j = 1;
	p = L->next;
	while (p && p->data != e) {
		p = p->next;
		if (p->data == e)
			return j;
		else
			return ERROR;
	}
}

Status GetElem_L(LinkList L, int i, ElemType& e) {//�ڴ�ͷ���ĵ�����L�в��ҵ�i��Ԫ��
	int j;
	LNode* p;
	p = L->next;
	j = 1;
	while (j < i && p) {
		p = p->next;
		++j;
		if (!p || j > i)
			e = p->data;
		return OK;
	} 
}

Status ListInsert_L(LinkList L, int i, ElemType& e) {
	int j;
	LNode* p, * s;
	p = L;
	j = 0;
	while (p && j < i - 1) {
		p = p->next;
		++j;
	}
	if (!p || j > i - 1)
		return ERROR;
	s = new LNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

Status ListDelete_L(LinkList L, int i, ElemType &e) {
	LNode* p, * q;
	int j;
	p = L;
	j = 0;
	while (p->next && j < i - 1) {
		p = p->next;
		++j;
	}
	if (!(p->next || j > i - 1))
		return ERROR;
	q = p->next;
	p->next = q->next;
	e = q->data;
	delete q;
	return OK;
}

void Displist(LinkList L) {
	for (LNode* p = L->next; p; p = p->next) {
		cout << p->data << '\t';
	}
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;
typedef int ElemType;

typedef struct LNode {
	ElemType data;
	struct LNode* next;
} LNode, * LinkList;

// ��ʼ��������ͷ��㣩
Status InitList_L(LinkList& L) {
	L = NULL;  // ֱ�ӳ�ʼ��Ϊ��
	return OK;
}

// ͷ�巨������ͷ��㣩
void createList_F(LinkList& L, int a[]) {
	L = NULL;  // ��ʼ��Ϊ������
	for (int i = 5; i >= 0; i--) {  // ������뱣֤ԭ˳��
		LNode* p = new LNode;
		p->data = a[i];
		p->next = L;
		L = p;  // ����ͷָ��
	}
}

// β�巨������ͷ��㣩
void CreateList_L(LinkList& L, int a[]) {
	LNode* r = NULL;  // βָ��
	L = NULL;         // ��ʼΪ��
	for (int i = 0; i < 6; i++) {
		LNode* p = new LNode;
		p->data = a[i];
		p->next = NULL;

		if (L == NULL) {  // ��һ���ڵ�
			L = p;
			r = L;
		}
		else {          // �����ڵ�
			r->next = p;
			r = p;
		}
	}
}

// �������ͷ��㣩
int LengthList(LinkList L) {
	int count = 0;
	LNode* p = L;
	while (p != NULL) {
		count++;
		p = p->next;
	}
	return count;
}

// ��ֵ���ң���ͷ��㣩
int LocateElem_L(LinkList L, ElemType e) {
	LNode* p = L;
	int pos = 1;
	while (p != NULL) {
		if (p->data == e) return pos;
		p = p->next;
		pos++;
	}
	return ERROR;
}

// ��λ�ò��ң���ͷ��㣩
Status GetElem_L(LinkList L, int i, ElemType& e) {
	if (i < 1) return ERROR;
	LNode* p = L;
	int j = 1;
	while (p && j < i) {
		p = p->next;
		j++;
	}
	if (!p) return ERROR;
	e = p->data;
	return OK;
}

// ����Ԫ�أ���ͷ��㣩
Status ListInsert_L(LinkList& L, int i, ElemType e) {
	if (i < 1) return ERROR;

	// ����ͷ��
	if (i == 1) {
		LNode* s = new LNode;
		s->data = e;
		s->next = L;
		L = s;  // ����ͷָ��
		return OK;
	}

	LNode* p = L;
	int j = 1;
	while (p && j < i - 1) {  // ��ǰ���ڵ�
		p = p->next;
		j++;
	}
	if (!p) return ERROR;

	LNode* s = new LNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

// ɾ��Ԫ�أ���ͷ��㣩
Status ListDelete_L(LinkList& L, int i, ElemType& e) {
	if (i < 1 || L == NULL) return ERROR;

	// ����ͷɾ
	if (i == 1) {
		LNode* q = L;
		e = q->data;
		L = L->next;  // ����ͷָ��
		delete q;
		return OK;
	}

	LNode* p = L;
	int j = 1;
	while (p && j < i - 1) {  // ��ǰ���ڵ�
		p = p->next;
		j++;
	}
	if (!p || !p->next) return ERROR;

	LNode* q = p->next;
	e = q->data;
	p->next = q->next;
	delete q;
	return OK;
}

// ��ʾ������ͷ��㣩
void Displist(LinkList L) {
	for (LNode* p = L; p != NULL; p = p->next) {
		cout << p->data << '\t';
	}
	cout << endl;
}


void MenuLine() {
	cout <<"���Ա���ϵͳ"<<endl;
	cout << "1����" << endl;
	cout << "2����Ԫ��" << endl;
	cout << "3ɾ��Ԫ��" << endl;
	cout << "4��λ�ò���" << endl;
	cout << "5��Ԫ��ֵ����" << endl;
	cout << "6���" << endl;
	cout << "0����" << endl;
}





int main() {

	LinkList L=NULL;
	ElemType x;
	int i, n, loc;
	int a[] = { 7,4,9,12,8,15 };
	char ch1, ch2, b;
	ch1 = 'y';
	while (ch1 == 'y' || ch1 == 'Y') {
		MenuLine();
		scanf("%c", &ch2);
		getchar();

		switch (ch2) {
		case '1':
			InitList_L(L);
			CreateList_L(L, a);
			cout << "����������Ա�Ϊ:";
			Displist(L);
			break;
		case '2':
			cout << "������Ҫ�����Ԫ��λ��:";
			cin >> i;
			cout << "������Ҫ�����Ԫ��ֵ:";
			cin >> x;
			ListInsert_L(L, i, x);
			cout << "����Ԫ��" << x << "������Ա�Ϊ:";
			Displist(L);
			break;
		case '3':
			cout << "������Ҫɾ����Ԫ��λ��:";
			cin >> i;
			if (ListDelete_L(L, i, x)) {
				cout << "�ѳɹ��ڵ�" << i << "��λ����ɾ��" << x << "��ɾ��������Ա�Ϊ:";
				Displist(L);
			}
			else
				cout << "����ɾ���Ĳ�������!" << endl;
			break;
		case '4':
			cout << "��������ҵ�Ԫ��λ��(���ڵ���1������):"; cin >> i;
			if (GetElem_L(L, i, x))cout << "��ǰ���Ա��" << i << "��Ԫ�ص�ֵΪ:" << x;
			else
				cout << "�����λ�ô���!";
			break;
		case '5':
			cout << "��������ҵ�����:";
			cin >> x;
			loc = LocateElem_L(L, x);
			if (loc)
				cout << "����Ԫ��ֵΪ" << x << "��λ��Ϊ:" << loc;
			else
				cout << "�ñ����޴�Ԫ��!";
			break;
		case '6':
			cout << "�����Ա�ĳ���Ϊ:" << LengthList(L);
			break;
		case '0':
			ch1 = 'n';
			break;
		default:
			cout << "��������������8-9����ѡ��!";
		}
		if (ch2 != '0') {
			cout << "\n���س�����������������������˵�!"<< endl << endl;
			b = getchar();
			if (b != '\xA') {
				getchar();
				ch1 = 'n';
			}

		}
		
	}




	return 0;
}