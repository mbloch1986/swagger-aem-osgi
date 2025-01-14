package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo._

case class ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenProperties])

object ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfoCodecJson: CodecJson[ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo] = CodecJson.derive[ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo]
  implicit val ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfoDecoder: EntityDecoder[ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo] = jsonOf[ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo]
  implicit val ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfoEncoder: EntityEncoder[ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo] = jsonEncoderOf[ComAdobeCqSocialModerationDashboardApiUserDetailsSocialComponenInfo]
}
