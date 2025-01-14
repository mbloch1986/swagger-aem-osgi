package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCalendarServletsTimeZoneServletProperties._

case class ComAdobeCqSocialCalendarServletsTimeZoneServletProperties (
  timezonesExpirytime: Option[ConfigNodePropertyInteger])

object ComAdobeCqSocialCalendarServletsTimeZoneServletProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCalendarServletsTimeZoneServletPropertiesCodecJson: CodecJson[ComAdobeCqSocialCalendarServletsTimeZoneServletProperties] = CodecJson.derive[ComAdobeCqSocialCalendarServletsTimeZoneServletProperties]
  implicit val ComAdobeCqSocialCalendarServletsTimeZoneServletPropertiesDecoder: EntityDecoder[ComAdobeCqSocialCalendarServletsTimeZoneServletProperties] = jsonOf[ComAdobeCqSocialCalendarServletsTimeZoneServletProperties]
  implicit val ComAdobeCqSocialCalendarServletsTimeZoneServletPropertiesEncoder: EntityEncoder[ComAdobeCqSocialCalendarServletsTimeZoneServletProperties] = jsonEncoderOf[ComAdobeCqSocialCalendarServletsTimeZoneServletProperties]
}
