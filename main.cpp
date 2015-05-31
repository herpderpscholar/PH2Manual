#include "graphics.h"
#include "gameFactory.h"


int main() {
    /* initialize screen graphics and gameplay factory instances */
    Graphics graphics = Graphics(); // Accepts a series of coordinate 'tiles' and paints them to the screen
    GameFactory game = GameFactory(); // Dictates underlying game logic

    /* Display menu, listen for player choices */
        /* INCOMPLETE
            Choice c = graphics.screen(graphics.SPLASH_SCREEN); <-- execution will hang in here; upon exit code,
                                                                    c will be notified of player choice
        */

    /* Load the appropriate context, either new game or resumed (*) */
        /* INCOMPLETE
            switch (c) {
                case "new":
                    game.initialize(<player choices>);
                    break;
                case "load":
                    game.resume();
                    break;
            }
        */

    /* start game loop */
    while (1) {
        graphics.draw(game.getTiles(),game.getEntities()); // Paint any updates to the screen, so player choices are based on sound data
        game.advance(); // advance all entities a turn and trigger their respective actions when needed
    }
}
