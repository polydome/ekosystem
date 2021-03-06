//
// Created by polydome on 4/15/20.
//

#ifndef EKOSYSTEM_ORGANISMPROPERTIESPRESENTERADAPTER_H
#define EKOSYSTEM_ORGANISMPROPERTIESPRESENTERADAPTER_H

#include "presentation/presenter/OrganismPropertiesPresenter.h"
#include <QtCore/QObject>


class OrganismPropertiesPresenterAdapter : public QObject {
    Q_OBJECT

public:
    explicit OrganismPropertiesPresenterAdapter(OrganismPropertiesPresenter& presenter) : presenter(presenter) {}
    int getCount() { return presenter.getCount(); }
    OrganismProperty getPropertyAt(int index) { return presenter.getPropertyAt(index); }
    unsigned getId() { return presenter.getId(); }
    bool hasSelectedOrganism() { return presenter.hasSelectedOrganism(); }

    void attach(OrganismPropertiesView* view) { presenter.attach(view); }

private:
    OrganismPropertiesPresenter& presenter;
};


#endif //EKOSYSTEM_ORGANISMPROPERTIESPRESENTERADAPTER_H
