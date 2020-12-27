#ifndef FT_STRING_H
# define FT_STRING_H

#include <stddef.h>

int			ft_strlen(const char *str);
char		*ft_join (char **str_1, char *str_2);

char		*ft_strchr(const char *s, int c);


int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

char		*ft_strcpy(char *dest, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);

char		*ft_strdup(const char *s);
char		*ft_strndup(const char *s, size_t size);

char 		*ft_strcat(char *dest, const char *src);
char 		*ft_strncat(char *dest, const char *src, size_t n);

const void	*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
void 		*ft_memcpy(void *dest, const void *src, size_t n);
void 		*ft_memset(void *str, int c, size_t n);

size_t 		ft_word_count(char *str, const char *sep);

void 		*ft_memmove( void * destptr, const void * srcptr, size_t num );

char 		**ft_split(char *str, char *sep);
size_t 		wordc(char **str_1, size_t *j);
#endif