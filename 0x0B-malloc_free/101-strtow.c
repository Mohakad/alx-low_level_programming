#include "main.h"
#include <stdlib.h>
/**
  *strtow- separate words
  *@str: argument
  *Return: null or pointer
  */
char **strtow(char *str)
{
    char **newstr;

    int wc = 0, i = 0, j = 0, k = 0, wl = 0, l = 0;
    
  if (str == NULL || *str == '\0')
        return (NULL);
    while (str[i] != '\0') {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            wc++;
        i++;
    }
    
  
    newstr = (char **)malloc((wc + 1) * sizeof(char *));
    if (newstr == NULL)
        return (NULL);
    
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') 
            wl++;
         else if (wl > 0) {
            newstr[j] = (char *)malloc((wl + 1) * sizeof(char));
            if (newstr[j] == NULL) {
               
                for (k = 0; k < j; k++) 
                    free(newstr[k]);
                
                free(newstr);
                return (NULL);
            }
            
            
            for (l = 0; l < wl; l++) {
                newstr[j][l] = str[i - wl + l];
            }
            newstr[j][wl] = '\0';
            j++;
            wl = 0;
        }
    }
    
    if (wl > 0) {
        newstr[j] = (char *)malloc((wl + 1) * sizeof(char));
        if (newstr[j] == NULL) {
            for (k = 0; k < j; k++) {
                free(newstr[k]);
            }
            free(newstr);
            return (NULL);
        }
        
        for (l = 0; l < wl; l++) {
            newstr[j][l] = str[i - wl + l];
        }
        newstr[j][wl] = '\0';
        j++;
    }
    
    newstr[j] = (NULL);
    
    return (newstr);
}
