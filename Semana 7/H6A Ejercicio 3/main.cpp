#include <conio.h>
#include <ctime>

#include "ZoneLeader.h"

int main() {
	srand(time(NULL));

	Person* client1 = new Person("Ruben", "Rondan", 36342526, "La Molina");
	Person* client2 = new Person("Aaron", "Davila", 63322559, "Miraflores");
	Person* client3 = new Person("Lucia", "Cervante", 85545720, "San Isidro");

	Seller* seller = new Seller("Marco", "Torres", 52242126, "San Borja", 2555665, 2000);
	seller->addClient(client1);
	seller->addClient(client2);
	seller->addClient(client3);

	Secretary* secretary = new Secretary("Franchesca", "Navarrete", 26352114, "San Miguel", 7777563, 3000);

	ZoneLeader* zoneLeader = new ZoneLeader("Jose", "Mascaro", 73256032, "Chorrillos", 999901226, 5000, secretary);

	zoneLeader->addSeller(seller);

	//seller->increaseSalary();
	zoneLeader->increaseSalary();
	//secretary->increaseSalary();

	zoneLeader->getZoneLeaderInfo();
	//seller->getSellerInfo();
	//secretary->getSecretaryInfo();

	//secretary->getSupervisorInfo();

	_getch();
	return 0;
}