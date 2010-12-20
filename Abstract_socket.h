/*
** Abstract_socket.h
** Login : <baku@anthrax>
** Started on  Tue Dec 14 10:49:37 2010 baku
** $Id$
**
** Author(s):
**  - baku <millet_c@epitech.net>
**
** Copyright (C) 2010 baku
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
** Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#ifndef   	ABSTRACT_SOCKET_H_
#define   	ABSTRACT_SOCKET_H_

class   Socket
{
 private:
 public:
  virtual bind() = 0;
  virtual handle() = 0;

};


#endif 	    /* !ABSTRACT_SOCKET_H_ */
