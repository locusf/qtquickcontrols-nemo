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

#include "nemothemeheader.h"

NemoThemeHeader::NemoThemeHeader(QObject *parent)
    : QObject(parent)
    , m_dimmer(new NemoThemeHeaderDimmer(this))
{
}

QColor NemoThemeHeader::background() const
{
    return m_background;
}

void NemoThemeHeader::setBackground(const QColor &background)
{
    if (m_background != background) {
        m_background = background;
        emit backgroundChanged();
    }
}

NemoThemeHeaderDimmer * NemoThemeHeader::dimmer() const
{
    return m_dimmer;
}
