package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties._

case class ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties (
  fieldWhitelist: Option[ConfigNodePropertyArray],
attachmentTypeBlacklist: Option[ConfigNodePropertyArray])

object ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicPropertiesCodecJson: CodecJson[ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties] = CodecJson.derive[ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties]
  implicit val ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicPropertiesDecoder: EntityDecoder[ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties] = jsonOf[ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties]
  implicit val ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicPropertiesEncoder: EntityEncoder[ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties] = jsonEncoderOf[ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties]
}