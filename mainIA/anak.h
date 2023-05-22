#pragma once
#ifndef ANAK_H
#define ANAK_H

class anak {
public:
	string nama;
	anak(string pnama) :nama(pnama) {
		cout << "anak \"" << nama << "\"ada\n";
	}
	~anak(string pnama) :nama(pnama) {
		cout << "anak \"" << nama << "\"tidak ada\n";
	}

};
#endif
