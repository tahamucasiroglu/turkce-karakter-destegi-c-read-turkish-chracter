void metin_al(){
//ü=129 Ü=154 i=105 İ=152 ş=159 Ş=158 ç=135 Ç=128 ö=148 Ö= 153 ğ=167 Ğ=166 boşluk=32 enter=10
	int temp[1000],size;
	string metin;
	for(int i=0;i<10000;i++){
		scanf("%c",&temp[i]);
		if(temp[i]==10){
			size=i;
			break;
		}
	}
	for(int i=0;i<size;i++){
		switch(temp[i]){
			case 129:
				metin+="ü";
				break;
			case 154:
				metin+="Ü";
				break;
			case 152:
				metin+="İ";
				break;
			case 159:
				metin+="ş";
				break;
			case 158:
				metin+="Ş";
				break;
			case 135:
				metin+="ç";
				break;
			case 128:
				metin+="Ç";
				break;
			case 148:
				metin+="ö";
				break;
			case 153:
				metin+="Ö";
				break;
			case 167:
				metin+="ğ";
				break;
			case 166:
				metin+="Ğ";
				break;
			default:
				metin+=(char)temp[i];
				break;
		}
	}
}
