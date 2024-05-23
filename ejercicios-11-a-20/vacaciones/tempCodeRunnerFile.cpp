if (find != string::npos)
	{
		return  phrase.replace(find, searchSize, pReplace);
	}
	else
	{
		return  "No se encontro la frase buscada: " + pSearch+"\n";
	}