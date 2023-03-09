#ifndef _ROS_atom_drive_Science_h
#define _ROS_atom_drive_Science_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace atom_drive
{

  class Science : public ros::Msg
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
      typedef int32_t _mode_type;
      _mode_type mode;
      typedef int32_t _drill_state_type;
      _drill_state_type drill_state;
      typedef int32_t _drill_speed_type;
      _drill_speed_type drill_speed;
      typedef int32_t _drill_distance_type;
      _drill_distance_type drill_distance;
      typedef int32_t _auger_state_type;
      _auger_state_type auger_state;
      typedef int32_t _carousel_type;
      _carousel_type carousel;
      typedef int32_t _reagent_type;
      _reagent_type reagent;

    Science():
      ld(0),
      ls(0),
      rd(0),
      rs(0),
      mode(0),
      drill_state(0),
      drill_speed(0),
      drill_distance(0),
      auger_state(0),
      carousel(0),
      reagent(0)
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
      union {
        int32_t real;
        uint32_t base;
      } u_mode;
      u_mode.real = this->mode;
      *(outbuffer + offset + 0) = (u_mode.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_mode.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_mode.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_mode.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->mode);
      union {
        int32_t real;
        uint32_t base;
      } u_drill_state;
      u_drill_state.real = this->drill_state;
      *(outbuffer + offset + 0) = (u_drill_state.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_drill_state.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_drill_state.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_drill_state.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->drill_state);
      union {
        int32_t real;
        uint32_t base;
      } u_drill_speed;
      u_drill_speed.real = this->drill_speed;
      *(outbuffer + offset + 0) = (u_drill_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_drill_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_drill_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_drill_speed.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->drill_speed);
      union {
        int32_t real;
        uint32_t base;
      } u_drill_distance;
      u_drill_distance.real = this->drill_distance;
      *(outbuffer + offset + 0) = (u_drill_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_drill_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_drill_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_drill_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->drill_distance);
      union {
        int32_t real;
        uint32_t base;
      } u_auger_state;
      u_auger_state.real = this->auger_state;
      *(outbuffer + offset + 0) = (u_auger_state.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_auger_state.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_auger_state.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_auger_state.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->auger_state);
      union {
        int32_t real;
        uint32_t base;
      } u_carousel;
      u_carousel.real = this->carousel;
      *(outbuffer + offset + 0) = (u_carousel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_carousel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_carousel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_carousel.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->carousel);
      union {
        int32_t real;
        uint32_t base;
      } u_reagent;
      u_reagent.real = this->reagent;
      *(outbuffer + offset + 0) = (u_reagent.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_reagent.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_reagent.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_reagent.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->reagent);
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
      union {
        int32_t real;
        uint32_t base;
      } u_mode;
      u_mode.base = 0;
      u_mode.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_mode.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_mode.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_mode.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->mode = u_mode.real;
      offset += sizeof(this->mode);
      union {
        int32_t real;
        uint32_t base;
      } u_drill_state;
      u_drill_state.base = 0;
      u_drill_state.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_drill_state.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_drill_state.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_drill_state.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->drill_state = u_drill_state.real;
      offset += sizeof(this->drill_state);
      union {
        int32_t real;
        uint32_t base;
      } u_drill_speed;
      u_drill_speed.base = 0;
      u_drill_speed.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_drill_speed.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_drill_speed.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_drill_speed.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->drill_speed = u_drill_speed.real;
      offset += sizeof(this->drill_speed);
      union {
        int32_t real;
        uint32_t base;
      } u_drill_distance;
      u_drill_distance.base = 0;
      u_drill_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_drill_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_drill_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_drill_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->drill_distance = u_drill_distance.real;
      offset += sizeof(this->drill_distance);
      union {
        int32_t real;
        uint32_t base;
      } u_auger_state;
      u_auger_state.base = 0;
      u_auger_state.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_auger_state.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_auger_state.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_auger_state.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->auger_state = u_auger_state.real;
      offset += sizeof(this->auger_state);
      union {
        int32_t real;
        uint32_t base;
      } u_carousel;
      u_carousel.base = 0;
      u_carousel.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_carousel.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_carousel.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_carousel.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->carousel = u_carousel.real;
      offset += sizeof(this->carousel);
      union {
        int32_t real;
        uint32_t base;
      } u_reagent;
      u_reagent.base = 0;
      u_reagent.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_reagent.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_reagent.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_reagent.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->reagent = u_reagent.real;
      offset += sizeof(this->reagent);
     return offset;
    }

    virtual const char * getType() override { return "atom_drive/Science"; };
    virtual const char * getMD5() override { return "8e05b2a9a42d142714d57893f8e029df"; };

  };

}
#endif
