#ifndef _ROS_atom_drive_Drive_h
#define _ROS_atom_drive_Drive_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace atom_drive
{

  class Drive : public ros::Msg
  {
    public:
      typedef int32_t _ld_type;
      _ld_type ld;
      typedef int32_t _ls_type;
      _ls_type ls;
      typedef int32_t _rd_type;
      _rd_type rd;
      typedef int32_t _rs_type;
      _rs_type rs;

    Drive():
      ld(0),
      ls(0),
      rd(0),
      rs(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_ld;
      u_ld.real = this->ld;
      *(outbuffer + offset + 0) = (u_ld.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ld.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ld.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ld.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ld);
      union {
        int32_t real;
        uint32_t base;
      } u_ls;
      u_ls.real = this->ls;
      *(outbuffer + offset + 0) = (u_ls.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ls.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ls.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ls.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ls);
      union {
        int32_t real;
        uint32_t base;
      } u_rd;
      u_rd.real = this->rd;
      *(outbuffer + offset + 0) = (u_rd.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rd.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rd.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rd.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rd);
      union {
        int32_t real;
        uint32_t base;
      } u_rs;
      u_rs.real = this->rs;
      *(outbuffer + offset + 0) = (u_rs.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rs.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rs.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rs.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rs);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_ld;
      u_ld.base = 0;
      u_ld.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ld.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ld.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ld.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ld = u_ld.real;
      offset += sizeof(this->ld);
      union {
        int32_t real;
        uint32_t base;
      } u_ls;
      u_ls.base = 0;
      u_ls.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ls.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ls.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ls.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ls = u_ls.real;
      offset += sizeof(this->ls);
      union {
        int32_t real;
        uint32_t base;
      } u_rd;
      u_rd.base = 0;
      u_rd.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rd.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rd.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rd.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rd = u_rd.real;
      offset += sizeof(this->rd);
      union {
        int32_t real;
        uint32_t base;
      } u_rs;
      u_rs.base = 0;
      u_rs.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rs.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rs.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rs.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rs = u_rs.real;
      offset += sizeof(this->rs);
     return offset;
    }

    virtual const char * getType() override { return "atom_drive/Drive"; };
    virtual const char * getMD5() override { return "4917bfa465c3d3543ccd170bc5ee19f3"; };

  };

}
#endif
