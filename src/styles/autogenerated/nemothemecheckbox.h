/*
 * Copyright (C) 2013 Lucien Xu <sfietkonstantin@free.fr>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

// This class is autogenerated using themehelper.py
// Any modification done in this file will be overridden

#ifndef NEMOTHEMECHECKBOX_H
#define NEMOTHEMECHECKBOX_H

#include <QtCore/QObject>
#include <QtGui/QColor>

class NemoThemeCheckbox: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QColor back1 READ back1 NOTIFY back1Changed)
    Q_PROPERTY(QColor back2 READ back2 NOTIFY back2Changed)
public:
    explicit NemoThemeCheckbox(QObject *parent = 0);
    QColor back1() const;
    void setBack1(const QColor &back1);
    QColor back2() const;
    void setBack2(const QColor &back2);
Q_SIGNALS:
    void back1Changed();
    void back2Changed();
private:
    QColor m_back1;
    QColor m_back2;
};

#endif //NEMOTHEMECHECKBOX_H