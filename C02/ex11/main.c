#include <stdio.h>
#include "ft_putstr_non_printable.c"

int	main(void)
{
	char	src1[] = "¢ £ ¤ ¥ ¦ § ¨ © ª « ¬ ® ¯ ° ± ² ³ ´ µ";
	char	src2[] = "¶ · ¸ ¹ º » ¼ ½ ¾ ¿ À Á Â Ã Ä Å Æ";
	char	src3[] = "Ç È É Ê Ë Ì Í Î Ï Ð Ñ Ò Ó Ô Õ Ö × Ø";
	char	src4[] = "Ù Ú Û Ü Ý Þ ß à á â ã ä å æ ç è é ê ë";
	char	src5[] = "ì í î ï ð ñ ò ó ô õ ö ÷ ø ù ú û ü ý þ ÿ";

	ft_putstr_non_printable(src1);
	write(1, "\n", 1);

	ft_putstr_non_printable(src2);
	write(1, "\n", 1);

	ft_putstr_non_printable(src3);
	write(1, "\n", 1);
	
	ft_putstr_non_printable(src4);
	write(1, "\n", 1);
	
	ft_putstr_non_printable(src5);
	write(1, "\n", 1);
	return (0);
}
