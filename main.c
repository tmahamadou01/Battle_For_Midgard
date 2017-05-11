/*
** main.c for main in /home/mahamadou/Documents/ETNA/Battle_For_Midgard
** 
** Made by TRAORE Mahamadou
** Login   <traore_m@etna-alternance.net>
** 
** Started on  Thu May 11 10:49:28 2017 TRAORE Mahamadou
** Last update Thu May 11 17:33:55 2017 TRAORE Mahamadou
*/

#include "battle.h"

int	main(int argc, char **argv)
{
  t_gamer	gamer;
  int		a;

  my_putstr_color("clear", "");
  
  argc = argc;
  a = 0;
  if (a == 0)
    {
      gamer.name = argv[2];
      display_name(gamer.name);
      //play_game();
    }
  return (0);
}
