 #include <iostream>
#include <string>
using namespace std;

 string csere (string cserel, int a, int b)
{
    char tmp;
    int k=(b-a)/2;
    int i=0;

  for(i=1;i<=k;i++)
    {

                tmp=cserel[a+i];
                cserel[a+i]=cserel[b-i];
                cserel[b-i]=tmp;


    }
    return cserel;
}


int szkeres (string keres ,int i)
    {
            int j=0;
            j=i;

                while (keres[j+1]!=' ' & j!=keres.length()-1)
                j++;
            return j;
    }


string mondat(string proba)
{
    int j=0;
    int i=0;


    for(i=0;i<=proba.length();i++)
        {
            if (i==0)
            {
                                if(proba[i]==' ')
                                {
                                    j=szkeres(proba,i);

                                    proba=csere(proba,i+1,j);

                                }

                               else if(proba[i]!=' ')
                                    {
                                        j=szkeres(proba,i);

                                        proba=csere(proba,i,j);

                                    }
            }

            else if (proba[i]==' ')

            {

                   j=szkeres(proba,i);

                   if ((j-i)>3)
                        proba=csere(proba,i+1,j);
                    else i=j ;                      //cout<<"egymas mellet volt vagy túl kicsi a cseréhez"<<endl;

            }


        }

return proba;
}
