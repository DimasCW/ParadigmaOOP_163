#pragma once
#ifndef IBU_H
#define IBU_H
#include<iostream>;
#include"anak.h"
#include<vector>
using namespace std;

class ibu {
public:
	string nama:
	vector<anak*> daftar_anak;

	ibu(string pnama) :(nama(pnama) {
		cout << "ibu \"" << nama << "\" ada\n";
	}
	~ibu(string pnama) :(nama(pnama) {
		cout << "ibu \"" << nama << "\"tidak ada\n";
	}
	void tambahanak(anak*);
	void cetakanak();

};
void ibu::tambahanak(anak*) {
	daftar_anak.push_back(panak);
}
void ibu::cetakanak() {
	cout << "daftar anak dari \"" << this->nama << "\":\n";
	for (auto& a: daftar_anak) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
#endif
