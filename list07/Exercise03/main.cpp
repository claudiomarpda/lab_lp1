#include <iostream>
#include "Doctor.h"
#include "Ophthalmologist.h"
#include "Surgeon.h"
#include "Otorhinolaryngologist.h"
#include "Gynecologist.h"

int main() {
    Doctor doctor("Roberto Nóbrega", 1.80f, 80.0f);
    doctor.printData();
    cout << endl;

    Surgeon surgeon("Thiago Luiz", 1.70f, 65.0f, "Scypher Master Course");
    surgeon.printData();
    surgeon.doSpecialization();

    Ophthalmologist ophthal("Adalberto", 1.65f, 80.0f, "Pidgeot Eyes of Eagle Course");
    ophthal.printData();
    ophthal.doSpecialization();

    Otorhinolaryngologist otorhino("James Botelho", 1.65f, 70.0f, "Jigglypuff Sounds Course");
    otorhino.printData();
    otorhino.doSpecialization();

    Gynecologist gynecologist("Italo", 2.0f, 80.0f, "Life Makers Course");
    gynecologist.printData();
    gynecologist.doSpecialization();

    return 0;
}