/**
    SPDOf V 1.0 by n0v1c4@sdf.org

 */

using namespace std;

class Spdo{ string cr, pr, dr, ou;

	public: void PostaviVrednosti(string, string, string, string);

	string c()
	{	ou.clear(); string w;
		for(size_t i=0; i < cr.size(); ++i)
		{	bitset<8>f(cr.c_str()[i]);

			w = f.to_string <char,string::traits_type,string::allocator_type>();

			for(size_t it = 0; it < w.size(); ++it)
			{ if(w.c_str()[it] == '1'){ ou.append(pr); } else { ou.append(dr);} }
		}
		cout << endl << "\t" << ou << endl << endl << endl;
		return "Done";
	}

	string d()
	{	dr.clear(); ou.clear();

		for(string::iterator iterstring = cr.begin(); iterstring != cr.end(); ++iterstring)
		{	dr = *iterstring;
			if(dr == pr){ ou.append("1"); } else { ou.append("0"); }
		}
		cout << endl << endl << "\t";
		istringstream in(ou);
		bitset<8> bs;
		while(in >> bs) cout << static_cast<char>(int(bs.to_ulong()));

		cout << endl << endl;
		return "Done";
	}

};

void Spdo::PostaviVrednosti (string x, string y, string z, string o){ cr = x; pr = y; dr = z; ou = o; };
