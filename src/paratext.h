/*
** Copyright (©) 2003-2013 Teus Benschop.
**  
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 3 of the License, or
** (at your option) any later version.
**  
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**  
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
**  
*/


#ifndef INCLUDED_PARATEXT_H
#define INCLUDED_PARATEXT_H


#include "libraries.h"
#include "style.h"


class ExportParatextStylesheet
{
public:
  ExportParatextStylesheet (int dummy);
  ~ExportParatextStylesheet ();
  void convert (const ustring& name);
  void save (ustring filename);
private:
  vector <ustring> stylesheet_lines;
  ustring marker;
};



#endif
