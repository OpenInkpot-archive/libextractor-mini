/*
     This file is part of libextractor.
     (C) 2002, 2003, 2004, 2005, 2006 Vidyut Samanta and Christian Grothoff

     libextractor is free software; you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published
     by the Free Software Foundation; either version 2, or (at your
     option) any later version.

     libextractor is distributed in the hope that it will be useful, but
     WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
     General Public License for more details.

     You should have received a copy of the GNU General Public License
     along with libextractor; see the file COPYING.  If not, write to the
     Free Software Foundation, Inc., 59 Temple Place - Suite 330,
     Boston, MA 02111-1307, USA.
 */

#ifndef EXTRACTOR_H
#define EXTRACTOR_H

#ifdef __cplusplus
extern "C" {
#if 0 /* keep Emacsens' auto-indent happy */
}
#endif
#endif


/**
 * Enumeration defining various sources of keywords.
 * See also
 * http://dublincore.org/documents/1998/09/dces/
 */
typedef enum {
  EXTRACTOR_UNKNOWN = 0,
  EXTRACTOR_FILENAME = 1,
  EXTRACTOR_MIMETYPE = 2,
  EXTRACTOR_TITLE = 3,
  EXTRACTOR_AUTHOR = 4,
  EXTRACTOR_ARTIST = 5,
  EXTRACTOR_DESCRIPTION = 6,
  EXTRACTOR_COMMENT = 7,
  EXTRACTOR_DATE = 8,
  EXTRACTOR_PUBLISHER = 9,
  EXTRACTOR_LANGUAGE = 10,
  EXTRACTOR_ALBUM = 11,
  EXTRACTOR_GENRE = 12,
  EXTRACTOR_LOCATION = 13,
  EXTRACTOR_VERSIONNUMBER = 14,
  EXTRACTOR_ORGANIZATION = 15,
  EXTRACTOR_COPYRIGHT = 16,
  EXTRACTOR_SUBJECT = 17,
  EXTRACTOR_KEYWORDS = 18,
  EXTRACTOR_CONTRIBUTOR = 19,
  EXTRACTOR_RESOURCE_TYPE = 20,
  EXTRACTOR_FORMAT = 21,
  EXTRACTOR_RESOURCE_IDENTIFIER = 22,
  EXTRACTOR_SOURCE = 23,
  EXTRACTOR_RELATION = 24,
  EXTRACTOR_COVERAGE = 25,
  EXTRACTOR_SOFTWARE = 26,
  EXTRACTOR_DISCLAIMER = 27,
  EXTRACTOR_WARNING = 28,
  EXTRACTOR_TRANSLATED = 29,
  EXTRACTOR_CREATION_DATE = 30,
  EXTRACTOR_MODIFICATION_DATE = 31,
  EXTRACTOR_CREATOR = 32,
  EXTRACTOR_PRODUCER = 33,
  EXTRACTOR_PAGE_COUNT = 34,
  EXTRACTOR_PAGE_ORIENTATION = 35,
  EXTRACTOR_PAPER_SIZE = 36,
  EXTRACTOR_USED_FONTS = 37,
  EXTRACTOR_PAGE_ORDER = 38,
  EXTRACTOR_CREATED_FOR = 39,
  EXTRACTOR_MAGNIFICATION = 40,
  EXTRACTOR_RELEASE = 41,
  EXTRACTOR_GROUP = 42,
  EXTRACTOR_SIZE = 43,
  EXTRACTOR_SUMMARY = 44,
  EXTRACTOR_PACKAGER = 45,
  EXTRACTOR_VENDOR = 46,
  EXTRACTOR_LICENSE = 47,
  EXTRACTOR_DISTRIBUTION = 48,
  EXTRACTOR_BUILDHOST = 49,
  EXTRACTOR_OS = 50,
  EXTRACTOR_DEPENDENCY = 51,
  EXTRACTOR_HASH_MD4 = 52,
  EXTRACTOR_HASH_MD5 = 53,
  EXTRACTOR_HASH_SHA0 = 54,
  EXTRACTOR_HASH_SHA1 = 55,
  EXTRACTOR_HASH_RMD160 = 56,
  EXTRACTOR_RESOLUTION = 57,
  EXTRACTOR_CATEGORY = 58,
  EXTRACTOR_BOOKTITLE = 59,
  EXTRACTOR_PRIORITY = 60,
  EXTRACTOR_CONFLICTS = 61,
  EXTRACTOR_REPLACES = 62,
  EXTRACTOR_PROVIDES = 63,
  EXTRACTOR_CONDUCTOR = 64,
  EXTRACTOR_INTERPRET = 65,
  EXTRACTOR_OWNER = 66,
  EXTRACTOR_LYRICS = 67,
  EXTRACTOR_MEDIA_TYPE = 68,
  EXTRACTOR_CONTACT = 69,
  EXTRACTOR_THUMBNAIL_DATA = 70,
  EXTRACTOR_PUBLICATION_DATE = 71,
  EXTRACTOR_CAMERA_MAKE = 72,
  EXTRACTOR_CAMERA_MODEL = 73,
  EXTRACTOR_EXPOSURE = 74,
  EXTRACTOR_APERTURE = 75,
  EXTRACTOR_EXPOSURE_BIAS = 76,
  EXTRACTOR_FLASH = 77,
  EXTRACTOR_FLASH_BIAS = 78,
  EXTRACTOR_FOCAL_LENGTH = 79,
  EXTRACTOR_FOCAL_LENGTH_35MM = 80,
  EXTRACTOR_ISO_SPEED = 81,
  EXTRACTOR_EXPOSURE_MODE = 82,
  EXTRACTOR_METERING_MODE = 83,
  EXTRACTOR_MACRO_MODE = 84,
  EXTRACTOR_IMAGE_QUALITY = 85,
  EXTRACTOR_WHITE_BALANCE = 86,
  EXTRACTOR_ORIENTATION = 87,
  EXTRACTOR_TEMPLATE = 88,
  EXTRACTOR_SPLIT = 89,
  EXTRACTOR_PRODUCTVERSION = 90,
  EXTRACTOR_LAST_SAVED_BY = 91,
  EXTRACTOR_LAST_PRINTED = 92,
  EXTRACTOR_WORD_COUNT = 93,
  EXTRACTOR_CHARACTER_COUNT = 94,
  EXTRACTOR_TOTAL_EDITING_TIME = 95,
  EXTRACTOR_THUMBNAILS = 96,
  EXTRACTOR_SECURITY = 97,
  EXTRACTOR_CREATED_BY_SOFTWARE = 98,
  EXTRACTOR_MODIFIED_BY_SOFTWARE = 99,
  EXTRACTOR_REVISION_HISTORY = 100,
  EXTRACTOR_LOWERCASE = 101,
  EXTRACTOR_COMPANY = 102,
  EXTRACTOR_GENERATOR = 103,
  EXTRACTOR_CHARACTER_SET = 104,
  EXTRACTOR_LINE_COUNT = 105,
  EXTRACTOR_PARAGRAPH_COUNT = 106,
  EXTRACTOR_EDITING_CYCLES = 107,
  EXTRACTOR_SCALE = 108,
  EXTRACTOR_MANAGER = 109,
  EXTRACTOR_MOVIE_DIRECTOR = 110,
  EXTRACTOR_DURATION = 111,
  EXTRACTOR_INFORMATION = 112,
  EXTRACTOR_FULL_NAME = 113,
  EXTRACTOR_CHAPTER = 114,
  EXTRACTOR_YEAR = 115,
  EXTRACTOR_LINK = 116,
  EXTRACTOR_MUSIC_CD_IDENTIFIER = 117,
  EXTRACTOR_PLAY_COUNTER = 118,
  EXTRACTOR_POPULARITY_METER = 119,
  EXTRACTOR_CONTENT_TYPE = 120,
  EXTRACTOR_ENCODED_BY = 121,
  EXTRACTOR_TIME = 122,
  EXTRACTOR_MUSICIAN_CREDITS_LIST = 123,
  EXTRACTOR_MOOD = 124,
  EXTRACTOR_FORMAT_VERSION = 125,
  EXTRACTOR_TELEVISION_SYSTEM = 126,
  EXTRACTOR_SONG_COUNT = 127,
  EXTRACTOR_STARTING_SONG = 128,
  EXTRACTOR_HARDWARE_DEPENDENCY = 129,
  EXTRACTOR_RIPPER = 130,
  EXTRACTOR_FILE_SIZE = 131,
  EXTRACTOR_TRACK_NUMBER = 132,
  EXTRACTOR_ISRC = 133,
  EXTRACTOR_DISC_NUMBER = 134,
  EXTRACTOR_GNUNET_DISPLAY_TYPE = 135,
  EXTRACTOR_GNUNET_ECBC_URI = 136,
} em_keyword_type_t;


/**
 * A linked list of keywords. This structure is passed around
 * in libExtractor and is typically the result of any keyword
 * extraction operation.
 * <p>
 * Each entry in the keyword list consists of a string (the
 * keyword) and the keyword type (of type KeywordType)
 * describing how/from where the keyword was obtained.
 */
typedef struct em_keyword_list_t em_keyword_list_t;
struct em_keyword_list_t {
  /* the keyword that was found */
  char * keyword;
  /* the type of the keyword (classification) */
  em_keyword_type_t keyword_type;
  /* the next entry in the list */
  struct em_keyword_list_t* next;
};



typedef em_keyword_list_t*
(*em_extract_method) (const char* filename,  char* data,
    size_t filesize, em_keyword_list_t*);

typedef struct em_extractors_t em_extractors_t;

struct em_extractors_t
{
    void* handle;
    em_extract_method method;
    em_extractors_t* next;
};

/*
 * Loads extractors from hardcoded directory (/usr/lib/madshelf/extractors) or
 * (if set) from ENV{EXTRACTORS_DIR}
 */
extern em_extractors_t* em_load_extractors();

extern void em_unload_extractors(em_extractors_t* extractors);

extern em_keyword_list_t* em_extractor_get_keywords(em_extractors_t* extractors,
                                              const char* filename);


extern const char* em_extractor_get_last(const em_keyword_type_t type,
                               const em_keyword_list_t* keywords);

extern const char* em_extractor_get_first(const em_keyword_type_t type,
                                const em_keyword_list_t* keywords);

extern void em_keywords_free(em_keyword_list_t * keywords);


extern em_keyword_list_t*
em_keywords_add(em_keyword_list_t* next, em_keyword_type_t type,
               const char* keyword);

#if 0 /* keep Emacsens' auto-indent happy */
{
#endif
#ifdef __cplusplus
}
#endif

#endif
