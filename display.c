/*
** display.c for display in /home/mahamadou/Documents/ETNA/Battle_For_Midgard
** 
** Made by TRAORE Mahamadou
** Login   <traore_m@etna-alternance.net>
** 
** Started on  Thu May 11 17:18:04 2017 TRAORE Mahamadou
** Last update Thu May 11 17:35:54 2017 TRAORE Mahamadou
*/

#include "battle.h"

void	display_name(char *name)
{
  my_putstr_color("yellow", "Hello ");
  my_putstr_color("cyan", name );
  my_putstr_color("yellow", " and welcome to Battle For Midgard !\n");
}
