/*
 * libefiboot - library for the manipulation of EFI boot variables
 * Copyright 2012-2015 Red Hat, Inc.
 * Copyright (C) 2001 Dell Computer Corporation <Matt_Domsch@dell.com>
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _EFIBOOT_DISK_H
#define _EFIBOOT_DISK_H

extern ssize_t _make_hd_dn(uint8_t *buf, ssize_t size, int fd,
			   uint32_t partition, int write_signature,
			   int ignore_pmbr_error)
	__attribute__((__visibility__ ("hidden")));
#define make_hd_dn(buf, size, off, fd, partition, write_signature, \
		   ignore_pmbr_error) \
	_make_hd_dn(((buf)+(off)), ((size)?((size)-(off)):0), (fd),\
		    (partition), (write_signature), (ignore_pmbr_error))

#endif /* _EFIBOOT_DISK_H */
