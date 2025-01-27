package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeInfo._

case class ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeProperties])

object ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeInfoCodecJson: CodecJson[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeInfo] = CodecJson.derive[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeInfo]
  implicit val ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeInfoDecoder: EntityDecoder[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeInfo] = jsonOf[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeInfo]
  implicit val ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeInfoEncoder: EntityEncoder[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeInfo] = jsonEncoderOf[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeInfo]
}
