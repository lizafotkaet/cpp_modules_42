#pragma once

#include "AForm.h"
#include "Bureaucrat.h"

/*
Required grades: sign 145, exec 137
Creates a file <target>_shrubbery in the working directory and writes ASCII trees
inside it.

                 &&& &&  & &&
             && &\/&\|& ()|/ @, &&
             &\/(/&/&||/& /_/)_&/_&
          &() &\/&|()|/&\/ '%" & ()
         &_\_&&_\ |& |&&/&__%_/_& &&
       &&   && & &| &| /& & % ()& /&&
        ()&_---()&\&\|&&-&&--%---()~
            &&     \|||
                    |||
                    |||
                    |||
              , -=-~  .-^- _

*/

class ShrubberyCreationForm : public AForm {
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& other);
		~ShrubberyCreationForm();

	private :

};