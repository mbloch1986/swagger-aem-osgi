package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeProperties._

case class ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeProperties (
  fieldWhitelist: Option[ConfigNodePropertyArray],
attachmentTypeBlacklist: Option[ConfigNodePropertyArray])

object ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSePropertiesCodecJson: CodecJson[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeProperties] = CodecJson.derive[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeProperties]
  implicit val ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSePropertiesDecoder: EntityDecoder[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeProperties] = jsonOf[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeProperties]
  implicit val ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSePropertiesEncoder: EntityEncoder[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeProperties] = jsonEncoderOf[ComAdobeCqSocialCommonsCommentsEndpointsImplCommentOperationSeProperties]
}
