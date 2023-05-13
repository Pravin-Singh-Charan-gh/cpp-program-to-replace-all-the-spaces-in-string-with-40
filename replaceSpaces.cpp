string replaceSpaces(string &str){
	string s="@40";
	for(int i=0;i<str.size();i++)
          if (str[i] == ' ') {
            str.erase(i, 1);
            str.insert(i, s);
          }
        return str;
}
