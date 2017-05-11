/*
** header.h for header in /home/mahamadou/Documents/ETNA/Battle_For_Midgard
** 
** Made by TRAORE Mahamadou
** Login   <traore_m@etna-alternance.net>
** 
** Started on  Thu May 11 10:02:00 2017 TRAORE Mahamadou
** Last update Thu May 11 17:32:46 2017 TRAORE Mahamadou
*/

/** Declaration des structures  **/

#ifndef _BATTLE_H
#define _BATTLE_H

typedef struct		s_creature
{
  char			*name;
  int			lvl;
  int			pv;
  int			pvmax;
  int			pm;
  int			pmmax;
}			t_creature;
  
typedef struct		s_gamer
{
  char			*name;
  struct s_creature	*team;
}			t_gamer;

int			main();
t_creature		*getCreature();
void			my_putchar(const char c);
int			my_strlen(const char *str);
void			my_putstr(const char *str);
int			my_strcmp(const char *s1, const char *s2);
char			*my_strdup(const char *str);
char			*readLine();
void			my_putstr_color(const char *color, const char *str);
void			display_name(char *name);
#endif
