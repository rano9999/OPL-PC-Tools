/***********************************************************************************************
 *                                                                                             *
 * This file is part of the qpcopl project, the graphical PC tools for Open PS2 Loader.        *
 *                                                                                             *
 * qpcopl is free software: you can redistribute it and/or modify it under the terms of        *
 * the GNU General Public License as published by the Free Software Foundation,                *
 * either version 3 of the License, or (at your option) any later version.                     *
 *                                                                                             *
 * qpcopl is distributed in the hope that it will be useful,  but WITHOUT ANY WARRANTY;        *
 * without even the implied warranty of  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  *
 * See the GNU General Public License for more details.                                        *
 *                                                                                             *
 * You should have received a copy of the GNU General Public License along with MailUnit.      *
 * If not, see <http://www.gnu.org/licenses/>.                                                 *
 *                                                                                             *
 ***********************************************************************************************/

#ifndef __QPCOPL_GAMERENAMEDIALOG__
#define __QPCOPL_GAMERENAMEDIALOG__

#include "ui_GameRenameDialog.h"

class GameRenameDialog : public QDialog, private Ui::GameRenameDialog
{
    Q_OBJECT

public:
    explicit GameRenameDialog(const QString & _initial_name, QWidget *_parent = nullptr);
    QString name() const;

private slots:
    void nameChanged(const QString & _name);
};

#endif // __QPCOPL_GAMERENAMEDIALOG__
