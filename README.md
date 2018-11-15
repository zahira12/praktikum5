# praktikum5
# Latihan1 # Penggunaan perintah loop menggunakan program do while

	1.Alur algoritmanya
	-Mendeklarasikan int a sebagai nilai input.
	-mendeklrasikan int max sebagai nilai tertetinggi.
	-memasukan nilai a
	-membandingkan nilai a dengan max jika a < max max = a
			if (a>max)
			max=a;
	-membandingkan inputan nilai a tidak sama dengan nilai 0 while(a!=0)
			do {
			cout<<"masukan bilangan:";
    			cin>> a;
      			if (a>max)
        		max=a;
			    }
    			while (a!=0);
	-mencetak nilai tertinggi cout<< max;

~ Berikut kode lengkapnya
	
	#include <iostream>

	using namespace std;

	int main()
	{
		int a,max=0;

		do{
		cout << "masukkan bilangan : ";
		cin >> a;

		if (a>max)
			max=a;
		}
		while (a!=0);

		cout << max;

		return 0;
	}

~ Berikut Hasilnya

![img](https://github.com/zahira12/praktikum5/blob/master/latihan1/hasil1screenshot.png)

~ Berikut Flowchartnya

![img](https://github.com/zahira12/praktikum5/blob/master/latihan1/FLOWCHART.png)

# Latihan2 # Penjumlahan Bilangan Benar atau Salah Dalam Program Penggunaan OR

	~Alur Algoritmanya
	-Mendeklarasikan int a,b, dan c
	-Mendeklarasikan variabel a,b, dan c sebagai nilai input
	-Memasukan nilai inputan a,b,c
	-Membandingkan penjumlahan nilai a + b =c dan a+c=b dan c+b=a
	```c++
	if ((a+b==c) or (a+c==b) or (b+c==a))
			cout << "benar";
		else
			cout << "salah";
	 ```
~ Berikut kode lengkapnya

	#include <iostream>

	using namespace std;

	int main()
	{
		int a,b,c,hasil;

		cout << "masukkan bilangan a : ";
		cin >> a;
		cout << "masukkan bilangan b : ";
		cin >> b;
		cout << "masukkan bilangan c : ";
		cin >> c;

		if ((a+b==c) or (a+c==b) or (b+c==a))
			cout << "benar";
		else
			cout << "salah";

		return 0;
	}

~ Berikut Hasilnya 

![img](https://github.com/zahira12/praktikum5/blob/master/latihan2/hasil2screenshot.png)
![img](https://github.com/zahira12/praktikum5/blob/master/latihan2/hasil3screenshot.png)
![img](https://github.com/zahira12/praktikum5/blob/master/latihan2/hasil4screenshot.png)
![img](https://github.com/zahira12/praktikum5/blob/master/latihan2/hasil5screenshot.png)

~ Berikut Flowchartnya

![img](https://github.com/zahira12/praktikum5/blob/master/latihan2/FLOWCHART.png)

