#ifndef STRINFO_H
#define STRINFO_H

typedef struct s_strInfo
{
	unsigned long len;
	int chars;
	int nbrs;
	int points;
	int isFEnd;
	int	unprint;
	int isSpec;
	int nbrAfterPoint;
}	t_strInfo;

#endif
