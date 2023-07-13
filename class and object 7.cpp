
#include<iostream>
#include<vector>
using namespace std;

class Matrix
{
	private:
		int row,col;
		vector<vector<int >> matrix;
	
	public:
		Matrix(int r, int c, vector<vector<int>> &m)
		{
			row = r;
			col = c;
			matrix = m;
		}
		
		int get_row_number()
		{
			return row;
		}
		
		int get_col_number()
		{
			return col;
		}
		vector<vector<int>> get_vector()
		{
			return matrix;
		}
		void set_element(int i, int j, int e)
		{
			matrix[i][j] = e;
		}
		void display()
		{
			for(int i=0; i<row; i++)
			{
				for(int j=0; j<col; j++)
				{
					cout<<matrix[i][j] <<"\t";
				}
				cout<<endl;
			}
			cout<<endl;
		}
		
		// matrix addition
		
		Matrix add(Matrix m)
		{
			vector<vector<int>> v;
			v.resize(row,vector<int>(col,0));
			for(int i=0; i<row; i++)
			{
				for(int j=0; j<col; j++)
				{
					v[i][j] = matrix[i][j]+m.get_vector()[i][j];
				}
			}
			Matrix n(row,col,v);
			return n;
		}
		
		//matrix multiplication
		
		Mtrix multiply(Matrix m)
		{
			vector<vector<int>> v;
			v.resize(row,vector<int>(m.get_col_number(),0));
			for(int i=0; i<row; i++)
			{
				for(int j=0; j<m.get_col_number(); j++)
				{
					for(int k=0; k<col; k++)
					{
						v[i][j] = v[i][j]+(matrix[i][k]*m.get_vector()[k][j]);
					}
				}
			}
			Matrix n(row,m.get_col_number(),v);
			return n;
		}
				
};

//using main function

int main()
{
	vector<vector<int>> m{{1,2,3},{4,5,6},{7,8,9}};
	vector<vector<int>> n{{10,11,12},{13,14,15},{16,17,18}};
	Matrix m1(3,4,m);
	Matrix m2(3,3,n);
	m1.display();
	m2.display();
	Matrix a =m1.add(m2);
	a.display();
	Matrix b = m1.multiply(m2);
	b.display();
	return 0;
}
