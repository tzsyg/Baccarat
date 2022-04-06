# Baccarat
1 Project Description.
"Baccarat" is a card game between a player and a dealer. The game consists of laying out cards (each card has a value) and when added up, the player with the number of points that is closer to the number 9 wins.

2 Requirements 

- Choice in menu - start game, instruction or exit
- Protection against entering a value other than 1-3 in the menu
- Entering the player's name, the amount of deposit and the bet value for the given round
- Select on whom to bet (K)-Croupier, (G)-Player, (R)-Remis
- Automatic drawing of (1-10) cards with values of (11-14) JQKA and assigning an appropriate value to each card
- Printing of the cards and their signs on the screen
- Selection over the selection of the third card (t/n)
- Showing the third card
- Counting up the values of the dealer's and player's cards, and listing who wins the round
- If the player has placed a bet on a winning pot, the winnings are paid to the player's deposit; if the player loses, the amount of the bet is deducted from the player's deposit
- The option to play the next round (t/n)

3 Course of execution

The performer describes the tasks performed by him. A description of the files of which the project consists should be included, description of the algorithm when the program is related to algorithmics. In case of using external libraries they should be briefly described (what they are used for, what functions were used)
My task was to make a card game. To create this game I needed to build a simple engine that draws pseudorandom numbers with random characters. Then creating algorithm assigning their values to numbers. Then summing their values and writing on the screen, which of the players won, and returning the possible winnings to the player if his bet was placed correctly.
The game engine consists of drawing a given number and assigning each number to a card along with calculating its value.  

4 User Manual 

Choose what you want to do in the main menu, then enter your name and the amount of money you want to deposit. Next you choose the size of your bet and who you want to bet on. You can choose between the croupier, the player or the highest scoring tie. After two cards are displayed you have the option to hit a third card. You then find out if you have won or lost and again have the choice to bet again and continue the game or to quit.
