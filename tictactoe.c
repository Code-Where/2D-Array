// Create a tic tac toe game using 2D Arrays
#include <stdio.h>
#include <conio.h>
void printGame(char board[3][3])
{
  for (int i = 1; i < 6; i++)
  {
    for (int j = 1; j < 12; j++)
    {
      if ((j % 4) == 0)
      {
        printf("|");
      }
      if (i == 1 && (j == 2 || j == 6 || j == 10))
      {
        printf("%c", board[0][((j - 2) / 3)]);
      }
      else if (i == 3 && (j == 2 || j == 6 || j == 10))
      {
        printf("%c", board[1][((j - 2) / 3)]);
      }
      else if (i == 5 && (j == 2 || j == 6 || j == 10))
      {
        printf("%c", board[2][((j - 2) / 3)]);
      }
      else if ((i % 2) != 0 && (j % 4) != 0)
      {
        printf(" ");
      }
      if ((i % 2) == 0 && (j % 4) != 0)
      {
        printf("-");
      }
    }
    printf("\n");
  }
}

int cordCheck(char board[3][3],int num)
{
  if (num >= 1 && num <= 9 && ((board[(num - 1) / 3][(num - 1) % 3]) != 'X' && (board[(num - 1) / 3][(num - 1) % 3]) != 'O'))
  {
    return 1;
  }
  return 0;
}

char win(char board[3][3], char fill)
{
  if ((board[0][0] == board[0][1] && board[0][0] == board[0][2]) || (board[0][0] == board[1][0] && board[0][0] == board[2][0]))
  {
    return board[0][0];
  }
  else if ((board[0][1] == board[1][1] && board[0][1] == board[2][1]) || (board[1][0] == board[1][1] && board[1][0] == board[1][2]))
  {
    return board[1][1];
  }
  else if ((board[0][2] == board[1][2] && board[0][2] == board[2][2]) || (board[2][0] == board[2][1] && board[2][0] == board[2][2]))
  {
    return board[2][2];
  }
  else if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) || (board[0][2] == board[1][1] && board[0][2] == board[2][0]))
  {
    return board[1][1];
  }
  else if (fill == '9')
  {
    return 'D';
  }
  return 'N';
}

void initGame(char board[3][3])
{
  for (int i = 0; i < 9; i++)
  {
    board[i / 3][i % 3] = i + 49;
  }
  printGame(board);
}

int main()
{
  char board[3][3];
  char p1[15], p2[15], fill = '0';
  unsigned int cord;
  printf("Enter Player 1 Name\n");
  gets(p1);
  printf("Enter Player 2 Name\n");
  gets(p2);

  initGame(board);

  while (fill != '9')
  {
    if ((fill % 2) == 0)
    {
      printf("\n%s's Turn\n", p1);
    }
    else
    {
      printf("\n%s's Turn\n", p2);
    }
    printf("Enter Box Number\t");
    scanf("%d", &cord);
    if (cordCheck(board, cord))
    {
      board[(cord - 1) / 3][(cord - 1) % 3] = 'X' - (fill%2)*9;
      printGame(board);
      fill++;
      char winner = win(board, fill);

      if (winner == 'X')
      {
        printf("Congratulations %s, You Won\n", p1);
        break;
      }
      else if (winner == 'O')
      {
        printf("Congratulations %s, You Won\n", p2);
        break;
      }
      else if(winner == 'D')
      {
        printf("Match is Draw. Want ReMatch? Enter Y\n");
        char re = getch();
        if (re == 'Y' || re == 'y')
        {
          fill = '0';
          initGame(board);
        }
      }
    }
    else
    {
      printf("Invalid Box Number!! Try Again\n");
    }
  }

  return 0;
}




//   12345678901
// 1    |   |
// 2 ---|---|---
// 3    |   |
// 4 ---|---|---
// 5    |   |