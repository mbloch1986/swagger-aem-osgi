package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo._

case class ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialNotificationsImplNotificationManagerImplProperties])

object ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialNotificationsImplNotificationManagerImplInfoCodecJson: CodecJson[ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo] = CodecJson.derive[ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo]
  implicit val ComAdobeCqSocialNotificationsImplNotificationManagerImplInfoDecoder: EntityDecoder[ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo] = jsonOf[ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo]
  implicit val ComAdobeCqSocialNotificationsImplNotificationManagerImplInfoEncoder: EntityEncoder[ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo] = jsonEncoderOf[ComAdobeCqSocialNotificationsImplNotificationManagerImplInfo]
}
