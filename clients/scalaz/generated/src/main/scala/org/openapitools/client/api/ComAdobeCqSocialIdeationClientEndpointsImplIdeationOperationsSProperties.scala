package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties._

case class ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties (
  fieldWhitelist: Option[ConfigNodePropertyArray],
attachmentTypeBlacklist: Option[ConfigNodePropertyArray])

object ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSPropertiesCodecJson: CodecJson[ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties] = CodecJson.derive[ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties]
  implicit val ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSPropertiesDecoder: EntityDecoder[ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties] = jsonOf[ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties]
  implicit val ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSPropertiesEncoder: EntityEncoder[ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties] = jsonEncoderOf[ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties]
}
