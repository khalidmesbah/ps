#include <iostream>
using namespace std;

int main()
{
     int n{3};
     char dots[3][3];
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               dots[i][j] = '.';
          }
     }

     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               cout << dots[i][j] << " ";
          }
          cout << endl;
     }

     bool player_x{0}, player_o{1}, player_o_won{1}, player_x_won{0};
     int times{9};
     while (times)
     {
          if (player_x)
          {
               int r, c;
               cout << "player x turn => Enter empty locations (r,c): ";
               cin >> r >> c;

               if (0 <= r && r <= n && 0 <= c && c <= n)
               {
                    if (dots[r][c] == 'x' || dots[r][c] == 'o')
                    {
                         cout << "Already taken. trye again!\n";
                         for (int i = 0; i < 3; i++)
                         {
                              for (int j = 0; j < 3; j++)
                              {
                                   cout << dots[i][j] << " ";
                              }
                              cout << endl;
                         }
                    }
                    else
                    {
                         dots[r][c] = 'o';
                         for (int i = 0; i < 3; i++)
                         {
                              for (int j = 0; j < 3; j++)
                              {
                                   cout << dots[i][j] << " ";
                              }
                              cout << endl;
                         }
                         /* check horizontal win */

                         for (int i = 0; i < 3; i++)
                         {
                              player_o_won = 1, player_x_won = 1;
                              for (int j = 0; j < 3; j++)
                              {
                                   if (dots[i][j] != 'x')
                                   {
                                        player_x_won = 0;
                                   }
                                   if (dots[i][j] != 'o')
                                   {
                                        player_o_won = 0;
                                   }
                              }
                              if (player_o_won)
                              {
                                   cout << "player_o_won!\n";
                                   return 0;
                              }
                              else if (player_x_won)
                              {
                                   cout << "player_x_won!\n";
                                   return 0;
                              }
                         }

                         /* check vertical win */

                         for (int i = 0; i < 3; i++)
                         {
                              player_o_won = 1, player_x_won = 1;
                              for (int j = 0; j < 3; j++)
                              {
                                   if (dots[j][i] != 'x')
                                   {
                                        player_x_won = 0;
                                   }
                                   if (dots[j][i] != 'o')
                                   {
                                        player_o_won = 0;
                                   }
                              }
                              if (player_o_won)
                              {
                                   cout << "player_o_won!\n";
                                   return 0;
                              }
                              else if (player_x_won)
                              {
                                   cout << "player_x_won!\n";
                                   return 0;
                              }
                         }

                         /* check main diagonal win */
                         player_o_won = 1, player_x_won = 1;
                         for (int i = 0; i < 3; i++)
                         {
                              if (dots[i][i] != 'x')
                              {
                                   player_x_won = 0;
                              }
                              if (dots[i][i] != 'o')
                              {
                                   player_o_won = 0;
                              }
                         }
                         if (player_o_won)
                         {
                              cout << "player_o_won!\n";
                              return 0;
                         }
                         if (player_x_won)
                         {
                              cout << "player_x_won!\n";
                              return 0;
                         }
                         /* check antidiagonal win */
                         player_o_won = 1, player_x_won = 1;
                         for (int i = 0; i < 3; i++)
                         {
                              for (int j = 0; j < 3; j++)
                              {
                                   if (i + j == 2)
                                   {
                                        if (dots[i][j] != 'x')
                                        {
                                             player_x_won = 0;
                                        }
                                        if (dots[i][j] != 'o')
                                        {
                                             player_o_won = 0;
                                        }
                                   }
                              }
                         }
                         if (player_o_won)
                         {
                              cout << "player_o_won!\n";
                              return 0;
                         }
                         if (player_x_won)
                         {
                              cout << "player_x_won!\n";
                              return 0;
                         }
                    }

                    player_o = 1, player_x = 0, times--;
               }

               else
                    cout << "Invalid input. try again!\n";
          }
          if (player_o)
          {
               int r, c;
               cout << "player x turn => Enter empty locations (r,c): ";
               cin >> r >> c;

               if (0 <= r && r <= n && 0 <= c && c <= n)
               {
                    if (dots[r][c] == 'x' || dots[r][c] == 'o')
                    {
                         cout << "Already taken. trye again!\n";
                         for (int i = 0; i < 3; i++)
                         {
                              for (int j = 0; j < 3; j++)
                              {
                                   cout << dots[i][j] << " ";
                              }
                              cout << endl;
                         }
                    }
                    else
                    {
                         dots[r][c] = 'x';
                         for (int i = 0; i < 3; i++)
                         {
                              for (int j = 0; j < 3; j++)
                              {
                                   cout << dots[i][j] << " ";
                              }
                              cout << endl;
                         }
                         /* check horizontal win */

                         for (int i = 0; i < 3; i++)
                         {
                              player_o_won = 1, player_x_won = 1;
                              for (int j = 0; j < 3; j++)
                              {
                                   if (dots[i][j] != 'x')
                                   {
                                        player_x_won = 0;
                                   }
                                   if (dots[i][j] != 'o')
                                   {
                                        player_o_won = 0;
                                   }
                              }
                              if (player_o_won)
                              {
                                   cout << "player_o_won!\n";
                                   return 0;
                              }
                              else if (player_x_won)
                              {
                                   cout << "player_x_won!\n";
                                   return 0;
                              }
                         }

                         /* check vertical win */

                         for (int i = 0; i < 3; i++)
                         {
                              player_o_won = 1, player_x_won = 1;
                              for (int j = 0; j < 3; j++)
                              {
                                   if (dots[j][i] != 'x')
                                   {
                                        player_x_won = 0;
                                   }
                                   if (dots[j][i] != 'o')
                                   {
                                        player_o_won = 0;
                                   }
                              }
                              if (player_o_won)
                              {
                                   cout << "player_o_won!\n";
                                   return 0;
                              }
                              else if (player_x_won)
                              {
                                   cout << "player_x_won!\n";
                                   return 0;
                              }
                         }

                         /* check main diagonal win */
                         player_o_won = 1, player_x_won = 1;
                         for (int i = 0; i < 3; i++)
                         {
                              if (dots[i][i] != 'x')
                              {
                                   player_x_won = 0;
                              }
                              if (dots[i][i] != 'o')
                              {
                                   player_o_won = 0;
                              }
                         }
                         if (player_o_won)
                         {
                              cout << "player_o_won!\n";
                              return 0;
                         }
                         if (player_x_won)
                         {
                              cout << "player_x_won!\n";
                              return 0;
                         }
                         /* check antidiagonal win */
                         player_o_won = 1, player_x_won = 1;
                         for (int i = 0; i < 3; i++)
                         {
                              for (int j = 0; j < 3; j++)
                              {
                                   if (i + j == 2)
                                   {
                                        if (dots[i][j] != 'x')
                                        {
                                             player_x_won = 0;
                                        }
                                        if (dots[i][j] != 'o')
                                        {
                                             player_o_won = 0;
                                        }
                                   }
                              }
                         }
                         if (player_o_won)
                         {
                              cout << "player_o_won!\n";
                              return 0;
                         }
                         if (player_x_won)
                         {
                              cout << "player_x_won!\n";
                              return 0;
                         }
                         player_x = 1, player_o = 0, times--;
                    }
               }
               else
                    cout << "Invalid input. try again!\n";
          }
     }
     cout << "tie!!!\n";
     return 0;
}
