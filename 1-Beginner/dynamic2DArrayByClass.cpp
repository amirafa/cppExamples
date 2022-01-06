#include<iostream>
using namespace std;
class Array {
private: 
	int row;
	int column;
	int **p;
	int default;
public:
	Array(int r, int c, int d) {
		row = r;
		column = c;
		default = d;
		p = new int*[r];
		for (int i = 0; i < r; i++) p[i] = new int [c];
		for (int j = 0; j < r; j++)
			for (int k = 0; k < c; k++) {
				p[j][k] = d;
			}
	}
	int get(int a, int b) {
		return p[a][b];
	}
	void set(int a, int b, int in) {
		p[a][b] = in;
	}
	void Print() {
		cout << "your Matrix is:\n";
		for (int l = 0; l < row; l++) {
			for (int m = 0; m < column; m++) {
				cout << p[l][m] << " ";
			}
			cout << endl;
		}
	}
	void setAll() {
		cout << "enter your nums:\n";
		for (int n = 0; n < row; n++)
			for (int o = 0; o < column; o++) {
				cin >> p[n][o];
			}
		cin.get();
	}
	void sort(int, int);
	void changeRC(int, int,int);
};
int main(){
	int r, c;        //row , column
	int x, y, value; //set
	int rc,ud;       //row||column & up||down
	int nr, nc, nd;  //newRow newCol newDef
	cout << "enter you row -> column:\n";
	cin >> r >> c;
	Array a1(r,c,0);
	a1.setAll();
/*	cout << "set p[x][y]: and your value:\n";
	cin >> x >> y >> value;
	a1.set(x, y,value); */
	a1.Print();
	cout << "sort as : enter 0:row 1:column -> enter 0:up 1:down:\n ";
	cin >> rc >> ud;
	a1.sort(rc, ud);
	a1.Print();
	cout << "enter newRow -> newCol -> newDef:\n";
	cin >> nr >> nc >> nd;
	a1.changeRC(nr, nc,nd);
	a1.Print();
	cin.get();
	cin.get();
}


//______________________________________________________________
void Array::sort(int rc, int ud) {
	int i, j, k; cout << "sorted of ";
	if (rc == 0) {
		for (i = 0; i < row; ++i)
		{
			for (j = 0; j < column; ++j)
			{
				for (k = j + 1; k < column; ++k) {
					if (ud == 0) {
						if (p[i][k] < p[i][j])
						{
							int temp = p[i][j];
							p[i][j] = p[i][k];
							p[i][k] = temp;
						}
					}
					if (ud == 1) {
						if (p[i][k] > p[i][j])
						{
							int temp = p[i][j];
							p[i][j] = p[i][k];
							p[i][k] = temp;
						}
					}
				}
			}
		}
	}
	if (rc == 1) {
		for (j = 0; j < column; ++j)
		{
			for (i = 0; i < row; ++i)
			{
				for (k = i + 1; k < row; ++k) {
					if (ud == 0) {
						if (p[k][j] < p[i][j])
						{
							int temp = p[i][j];
							p[i][j] = p[k][j];
							p[k][j] = temp;
						}
					}
					if (ud == 1) {
						if (p[k][j] > p[i][j])
						{
							int temp = p[i][j];
							p[i][j] = p[k][j];
							p[k][j] = temp;
						}
					}
				}
			}
		}
	}
//___________
}
//___________________________________________________________
void Array::changeRC(int nr,int nc,int nd) {
	int temp[20][20];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			temp[i][j] = p[i][j];
	p = new int*[nr];
	for (int k = 0; k < nr; k++) p[k] = new int[nc];
	
	for (int l = 0; l < nr; l++)
		for (int m= 0; m < nc; m++) p[l][m] = nd;

	for (int n = 0; n < row; n++)
		for (int o = 0; o < column; o++) p[n][o] = temp[n][o];
	row = nr;
	column = nc;
	default = nd;
}