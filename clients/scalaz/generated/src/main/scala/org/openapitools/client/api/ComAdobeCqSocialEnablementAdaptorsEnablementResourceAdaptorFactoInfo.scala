package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoInfo._

case class ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoProperties])

object ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoInfoCodecJson: CodecJson[ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoInfo] = CodecJson.derive[ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoInfo]
  implicit val ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoInfoDecoder: EntityDecoder[ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoInfo] = jsonOf[ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoInfo]
  implicit val ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoInfoEncoder: EntityEncoder[ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoInfo] = jsonEncoderOf[ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoInfo]
}
