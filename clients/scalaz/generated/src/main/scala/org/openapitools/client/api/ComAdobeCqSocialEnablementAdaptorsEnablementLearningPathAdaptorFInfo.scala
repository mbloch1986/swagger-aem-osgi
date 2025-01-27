package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFInfo._

case class ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties])

object ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFInfoCodecJson: CodecJson[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFInfo] = CodecJson.derive[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFInfo]
  implicit val ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFInfoDecoder: EntityDecoder[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFInfo] = jsonOf[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFInfo]
  implicit val ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFInfoEncoder: EntityEncoder[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFInfo] = jsonEncoderOf[ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFInfo]
}
